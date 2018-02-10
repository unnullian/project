import RPi.GPIO as GPIO
from ConnectionDB import ConnectDB as DB
import  time

class RelayLED :
    CHANNEL1 = 0
    CHANNEL2 = 1
    myDB = DB()
    def __init__(self):
        self.state1 = 0
        self.state2 = 0
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(17, GPIO.OUT)  # gpio 17번 셋업 -> 0채널 릴레이모듈
        GPIO.setup(19, GPIO.OUT)  # gpio 19번 셋업 -> 0채널 LED 스위치
        GPIO.setup(27, GPIO.OUT)  # gpio 27번 셋업 -> 1채널 릴레이모듈
        GPIO.setup(6, GPIO.OUT)  # gpio 6번 셋업 -> 1채널 LED 스위치
        GPIO.setup(26, GPIO.IN)  # 스위치
        GPIO.setup(13, GPIO.IN)  # 스위치

    def __del__(self):
        GPIO.cleanup()



    def LEDOn(self, rcvChannel):
        if (rcvChannel == self.CHANNEL1) :
            GPIO.output(17, True)
            GPIO.output(19, True)
        elif (rcvChannel == self.CHANNEL2) :
            GPIO.output(27, True)
            GPIO.output(6, True)

    def LEDOff(self, rcvChannel):
        if (rcvChannel == self.CHANNEL1) :
            GPIO.output(17, False)
            GPIO.output(19, False)
        elif (rcvChannel == self.CHANNEL2) :
            GPIO.output(27, False)
            GPIO.output(6, False)

    def PressButtonRemoteCheck1(self, channel):
        tuple = self.myDB.select("select flag1 from multitap where num=1")
        flag = 0
        if tuple[0][0] == 0 :
            flag = 0

        else :
            flag = 1

        return flag
    def PressButtonRemoteCheck2(self, channel):
        tuple = self.myDB.select("select flag2 from multitap where num=1")
        flag = 0
        if tuple[0][0] == 0 :
            flag = 0

        else :
            flag = 1

        return flag



    def PressButtonPhysicalCheck1(self, channel):
        self.state1 = self.PressButtonRemoteCheck1(0)
        # 눌렸으니 이전 상태값과 비교해본다.
        if GPIO.input(26) == 1 :
            if self.state1 == 0 :
                self.state1 = 1
            else :
                self.state1 = 0


            time.sleep(0.05)



        return abs(self.state1)

    def PressButtonPhysicalCheck2(self, channel):
        self.state2 = self.PressButtonRemoteCheck2(0)
        # 눌렸으니 이전 상태값과 비교해본다.
        if GPIO.input(26) == 1 :
            if self.state2 == 0 :
                self.state2 = 1
            else :
                self.state2 = 0


            time.sleep(0.05)



        return abs(self.state2)


