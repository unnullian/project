import time
from ADC_MCP3208 import MCP3208 as ADC
from ACS712 import ElectronicSensor as MyACS712
from RelaySwitch import RelayLED as MyRelayLED
from ConnectionDB import ConnectDB as DB

adc = ADC()
elecSensor = MyACS712()
relayLED = MyRelayLED()
myDB = DB()


try :
    falg1Status = 0
    falg2Status = 1
    while True :
        elecTuple = elecSensor.getAmp(0)
       # relayLED.LEDOn(0)
      #  relayLED.LEDOn(1)
        print("| 1. ADC값 : %d | V_RMS : %.1f | Amp_RMS : %.1f | Watt : %.1f |" % (elecTuple[0], elecTuple[1], elecTuple[2], elecTuple[3] ))
        data1 = elecTuple[0]
       # time.sleep(1)
       # relayLED.LEDOff(0)
       # relayLED.LEDOff(1)

        elecTuple2 = elecSensor.getAmp(1)
       # relayLED.LEDOn(0)
       # relayLED.LEDOn(1)
        print("| 2. ADC값 : %d | V_RMS : %.1f | Amp_RMS : %.1f | Watt : %.1f |" % (elecTuple2[0], elecTuple2[1], elecTuple2[2], elecTuple2[3] ))
        data2 = elecTuple2[0]
       # time.sleep(1)
      #  relayLED.LEDOff(0)
       # relayLED.LEDOff(1)



     #   flag1 = myDB.select("select flag1 from all_multitap where multitap_num = 1")

        flag1_1 = relayLED.PressButtonRemoteCheck1(0)
        flag2_1 = relayLED.PressButtonPhysicalCheck1(0)

        flag1_2 = relayLED.PressButtonRemoteCheck2(0)
        flag2_2 = relayLED.PressButtonPhysicalCheck2(0)

        if (flag2_1 == 0 or flag1_1 == 0):
            relayLED.LEDOff(0)
            state1 = 0
        elif (flag2_1 == 1 or flag1_1 == 1):
            relayLED.LEDOn(0)
            state1 = 1

        if (flag2_2 == 0 or flag1_2 == 0):
            relayLED.LEDOff(1)
            state2 = 0
        elif (flag2_2 == 1 or flag1_2 == 1):
            relayLED.LEDOn(1)
            state2 = 1

        print (state1)
        print (state2)
        myDB.updateQuery("update multitap set mA1=" + str(elecTuple[2]*220) + ", flag1=" + str(state1) + ", mA2="+ str(elecTuple2[2]*220) +", flag2 = " + str(state2) +" where num=1")

        time.sleep(0.3)



finally:
    pass