try:
    import RPi.GPIO as GPIO
except ImportError:
    import SimulRPi.GPIO as GPIO

import time 
from datetime import datetime

class GPIOParameters:
    def __init__(self) -> None:
        pass

class GPIOControllerState():
    def __init__(self, pwm_usage=False) -> None:
        # no power(0), full power(1), dimmed(in between)
        self.power = 0
        # in case a sensor blocks control 
        self.blocked = False
        # in case this port is run in PWM mode
        self.pwm = pwm_usage
        self.pwm_freq = 500
        self.pwm_dc = 0.5

class GPIOController():
    """

         ____                _                   _             
        / ___|___  _ __  ___| |_ _ __ _   _  ___| |_ ___  _ __ 
       | |   / _ \| '_ \/ __| __| '__| | | |/ __| __/ _ \| '__|
       | |__| (_) | | | \__ \ |_| |  | |_| | (__| || (_) | |   
        \____\___/|_| |_|___/\__|_|   \__,_|\___|\__\___/|_|   


    """
    def __init__(self, gpio_pins, pwm_settings) -> None:
        self.params = GPIOParameters()
        self.params.gpios = gpio_pins
        self.state = GPIOControllerState(pwm_settings["enabled"])
        if(self.state.pwm):
            self.state.pwm_freq = pwm_settings["frequency"]
            self.state.pwm_dc = pwm_settings["dutyCycle"]


        # create an empty object for PWM use if needed
        self.pwm_controls = []

        # open gpio headers
        self.init_gpio_headers()

        # turn power off when starting
        self.gpioOff()

    """

         ____ ____ ___ ___     ____            _             _     
        / ___|  _ \_ _/ _ \   / ___|___  _ __ | |_ _ __ ___ | |___ 
       | |  _| |_) | | | | | | |   / _ \| '_ \| __| '__/ _ \| / __|
       | |_| |  __/| | |_| | | |__| (_) | | | | |_| | | (_) | \__ \
        \____|_|  |___\___/   \____\___/|_| |_|\__|_|  \___/|_|___/


    """
    def init_gpio_headers(self):
        '''
        open all the gpio headers that need to be controlled by this node.
        Should be called in the node init phase (the constructor).
        Make sure you already have the ROS params loaded.
        '''
        # use GPIO header numbers
        GPIO.setmode(GPIO.BCM)

        # check if we should run in PWM mode
        for gpio_pin in self.params.gpios:
            GPIO.setup(gpio_pin, GPIO.OUT)
        if(self.state.pwm):
            self.setupPWM()

    def setupPWM(self):
        for gpio_pin in self.params.gpios:
            # set initial frequency
            self.pwm_controls.append(GPIO.PWM(gpio_pin, self.state.pwm_freq))
        for pwm_obj in self.pwm_controls:
            # start pwm with duty cycle 0 (aka off)
            pwm_obj.start(0)
        self.state.pwm = True

    def stopPWM(self):
        for pwm_obj in self.pwm_controls:
            # stop it! 
            pwm_obj.stop()
        self.state.pwm = False

    def gpioOn(self) -> bool:
        '''
        Turn on the pump (define the GPIO header of the pump in the 
        config file)
        '''
        # if this controller is blocked do not allow it to be 
        # turned on
        if (self.state.blocked):
            return False

        # Turn the GPIO pin on
        for gpio_pin in self.params.gpios:
            GPIO.output(gpio_pin, GPIO.HIGH)
        self.state.power = 1
        return True

    def gpioOff(self) -> bool:
        '''
        Turn off the pump (define the GPIO header of the pump in the 
        config file)
        '''
        # Turn the GPIO pin off
        for gpio_pin in self.params.gpios:
            GPIO.output(gpio_pin, GPIO.LOW)
        self.state.power = 0
        print('Turning off')
        return True

    def gpioPWM(self, dutyCycle: float, freq: float) -> bool:
        """
        Sets a PWM value for this controller
        """
        self.state.pwm_dc = dutyCycle
        self.state.pwm_freq = freq
        for pwm_obj in self.pwm_controls:
            pwm_obj.ChangeDutyCycle(self.state.pwm_dc * 100)
            pwm_obj.ChangeFrequency(self.state.pwm_freq)
        print(f'Set PWM Duty Cycle to {self.state.pwm_dc}')
        print(f'Set PWM Frequency to {self.state.pwm_freq}')
        return True

    def gpioBlock(self) -> bool:
        """
        Block this controller and turn it off
        """
        self.gpioOff()
        self.state.blocked = True

    def gpioUnblock(self) -> bool:
        """
        Unblock this controller
        """
        self.state.blocked = False

    def gpioPowerControl(self, input: float) -> bool:
        """
        Depending on the input either turn on/off this pin 
        or set PWM value.

        @ input: float value from 0.0 - 1.0
        """
        if(input < 0.0 or input > 1.0):
            print("Invalid input value! Only inputs from 0.0 - 1.0 " +
                    "are valid")
            return False

        else:
            if(input == 0.0):
                return self.gpioOff()
            elif(input == 1.0):
                return self.gpioOn()
            else:
                return self.gpioPWM(input, self.state.pwm_freq)

    def gpioBlockControl(self, input: bool) -> bool:
        """
        Depending on the input either turn on/off this pin 
        or set PWM value.

        @ input: bool
        """
        if(input == False):
            return self.gpioUnblock()
        elif(input == True):
            return self.gpioBlock()
        else:
            print("Invalid input value! Only boolean values are allowed")
            return False

    def close(self):
        '''
        open all the gpio headers that need to be controlled by this node.
        Should be called in the node init phase (the constructor).
        Make sure you already have the ROS params loaded.
        '''
        GPIO.cleanup()
 