from RPi.GPIO import GPIO
from RelaySwitch import RelayLED

class PushSwitch :
    def __init__(self):
        self.relayLed = RelayLED()
        self.state = False

    def PressButton(self, channel):
        if self.state == False :
            state = True
            #LED ON
            self.relayLed.LEDOn(channel)
        elif self.state == True :
            state = False
            #LED OFF
            self.relayLed.LEDOff(channel)

