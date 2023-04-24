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
    def __init__(self) -> None:
        # no power(0), full power(1), dimmed(in between)
        self.power = 0
        # in case a sensor blocks control 
        self.blocked = False

class GPIOController():
    """

         ____                _                   _             
        / ___|___  _ __  ___| |_ _ __ _   _  ___| |_ ___  _ __ 
       | |   / _ \| '_ \/ __| __| '__| | | |/ __| __/ _ \| '__|
       | |__| (_) | | | \__ \ |_| |  | |_| | (__| || (_) | |   
        \____\___/|_| |_|___/\__|_|   \__,_|\___|\__\___/|_|   


    """
    def __init__(self, gpio_pins) -> None:
        self.params = GPIOParameters()
        self.params.gpios = gpio_pins
        self.state = GPIOControllerState()

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
        for gpio_pin in self.params.gpios:
            GPIO.setup(gpio_pin, GPIO.OUT)

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
        if(input == 0.0):
            return self.gpioOff()
        elif(input == 1.0):
            return self.gpioOn()
        elif(input > 0.0 and input < 1.0):
            print("PWM support is not yet implemented!")
        else:
            print("Invalid input value! Only inputs from 0.0 - 1.0 " +
                    "are valid")
            return False

    def gpioBlockControl(self, input: bool) -> bool:
        """
        Depending on the input either turn on/off this pin 
        or set PWM value.

        @ input: float value from 0.0 - 1.0
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
 
    # def check_status(self):
    #     status = False
    #     # iterate over pump intervals 
    #     for interval in self.params.on_intervals:
    #         status = self.inTimeInterval(interval[0], interval[1])
    #         if (status):
    #             break

    #     if(status):
    #         # check if we are already in pumping state
    #         if(not (self.status == status)):
    #             self.status = status
    #             self.gpioOn()
    #     else:
    #         if(not (self.status == status)):
    #             self.status = status
    #             self.gpioOff()

    # def inTimeInterval(self, on_time, off_time) -> bool:
    #     '''
    #     checks if current time is in on_time < now < off_time
    #     '''
    #     now = datetime.now()
    #     on_time = now.replace(hour=on_time.hour, 
    #                         minute=on_time.minute, 
    #                         second=on_time.second)
    #     off_time = now.replace(hour=off_time.hour, 
    #                         minute=off_time.minute, 
    #                         second=off_time.second)
    #     return now > on_time and now < off_time
