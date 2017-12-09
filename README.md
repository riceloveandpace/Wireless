# Wireless
Code for the Wireless Component of Rice L&P Pacemaker Design

### Main Components
Our wireless system is based on a Tiva C Series, ThingMagic UHF Micro Reader, Farsens ROCKY100 UHF WEH Tag, and MSP430-G2x33. 


### ThingMagic Micro Reader
To interface with the Micro reader we are utilizing the MercuryAPI tool provided by ThingMagic. Because this shoudl eventually be used in an embedded system (currently the Tiva C Series chip), we are utilizing the C programming interface of the API. A guide for the ThingMagic MercuryAPI is linked [here](http://www.thingmagic.com/manuals-firmware#Mercury_API).

### Farsens ROCKY100
The FARSENS ROCKY100 is the newest generation Wireless Energy Harvesting RFID IC provided by Farsens. According to the Farsens website, it features a configurable SPI port (master/slave) for communication with external devices and a configurable power output for driving devices from the energy harvested from the UHF RF field. The IC is also compatible with EPC C1G2 RFID readers.

### MSP430-G2x33
The MSP430 is a low powered microcontroller suitable for low energy environments such as portable devices. Because of it's low consumption it is an ideal choice for our design. [MSP430G2x33 Datasheet](http://www.ti.com/lit/ds/symlink/msp430g2433.pdf).
