import spidev

class MCP3208 :



    def __init__(self):
        self.spi = spidev.SpiDev()
        self.spi.open(0, 0) # SPI채널 0번, Chip Selector 0번
        self.spi.max_speed_hz = 1000000 # 1MHz

    def __del__(self):
        self.spi.close()

    def adcRead(self, channel) :
        rcv = self.spi.xfer2([0x6 | ((channel & 0x7) >> 2), (channel & 0x3) << 6, 0x0])
        adcVal = ((rcv[1] & 0xf) << 8) | rcv[2]
        return adcVal