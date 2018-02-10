import RPi.GPIO as GPIO
from ADC_MCP3208 import MCP3208 as ADC

class ElectronicSensor :

    def __init__(self):
        self.adc = ADC()
        self.KOREA_VOLT = 220

    def getVPP(self, channel):
        maxValue = 0 # 초기화
        minValue = 2048
        clkCnt = 0

        while clkCnt <= 100 : # 라즈베리파이의 연산속도 1GHz / 2 = 500000 => 0.5초
            readValue = self.adc.adcRead(channel) # 채널에 대한 ADC 값을 가져옴
            if readValue > maxValue :
                maxValue += readValue
            if readValue < maxValue :
                minValue += readValue
            clkCnt += 1
            result = ( (maxValue-minValue)/100 * 5.0 ) / 2048.0 # Volt 구하는 알고리즘

            return result

    def getVPP_ADC(self, ch):
        maxValue = 0
        minValue = 2048
        cnt = 0

        while cnt <= 500000:
            readValue = self.adc.adcRead(ch)
            if readValue > maxValue:
                maxValue = readValue
            if readValue < minValue:
                minValue = readValue

            result = ((maxValue - minValue) * 5.0) / 2048.0

            return result

    def getAmp(self, channel):
        voltADC = self.getVPP_ADC(channel)
        V_RMS = (voltADC/2.0) * 0.707       #측정된 VOLT
        Amp_RMS = (V_RMS*1000) / 100      #측정된 AMP
        Watt = 220 * Amp_RMS    #측정된 Watt

        return self.adc.adcRead(channel), V_RMS, Amp_RMS, Watt




