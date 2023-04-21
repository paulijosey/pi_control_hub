import RPi.GPIO as GPIO
import time 
from datetime import datetime

class Parameters:
    def __init__(self) -> None:
        pass

class GPIOController():
    """

         ____                _                   _             
        / ___|___  _ __  ___| |_ _ __ _   _  ___| |_ ___  _ __ 
       | |   / _ \| '_ \/ __| __| '__| | | |/ __| __/ _ \| '__|
       | |__| (_) | | | \__ \ |_| |  | |_| | (__| || (_) | |   
        \____\___/|_| |_|___/\__|_|   \__,_|\___|\__\___/|_|   


    """
    def __init__(self, gpio_pins):
        self.params = Parameters()
        self.params.gpios = gpio_pins
        self.status = False

        # open gpio headers
        self.init_gpio_headers()

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
        # Turn the GPIO pin on
        for gpio_pin in self.params.gpios:
            GPIO.output(gpio_pin, GPIO.HIGH)
        self.status = True
        return True

    def gpioOff(self) -> bool:
        '''
        Turn off the pump (define the GPIO header of the pump in the 
        config file)
        '''
        # Turn the GPIO pin off
        for gpio_pin in self.params.gpios:
            GPIO.output(gpio_pin, GPIO.LOW)
        self.status = False
        print('Turning off')
        return True

    def close(self):
        '''
        open all the gpio headers that need to be controlled by this node.
        Should be called in the node init phase (the constructor).
        Make sure you already have the ROS params loaded.
        '''
        GPIO.cleanup()
 
    """
    
       _     _     _                            
      | |   (_)___| |_ ___ _ __   ___ _ __ ___  
      | |   | / __| __/ _ \ '_ \ / _ \ '__/ __| 
      | |___| \__ \ ||  __/ | | |  __/ |  \__ \ 
      |_____|_|___/\__\___|_| |_|\___|_|  |___/ 

    
    """

    """
    
       ____        _     _ _     _                   
      |  _ \ _   _| |__ | (_)___| |__   ___ _ __ ___ 
      | |_) | | | | '_ \| | / __| '_ \ / _ \ '__/ __|
      |  __/| |_| | |_) | | \__ \ | | |  __/ |  \__ \
      |_|    \__,_|_.__/|_|_|___/_| |_|\___|_|  |___/

    
    """

    #    _   _ _   _ _ _ _           _____                 _   _                  
    #   | | | | |_(_) (_) |_ _   _  |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  
    #   | | | | __| | | | __| | | | | |_ | | | | '_ \ / __| __| |/ _ \| '_ \/ __| 
    #   | |_| | |_| | | | |_| |_| | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ 
    #    \___/ \__|_|_|_|\__|\__, | |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ 
    #                        |___/                                                
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
