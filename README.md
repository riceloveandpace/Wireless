# Wireless
Code for the Wireless Component of Rice L&P Pacemaker Design

### Main Components
Our wireless system is based on a Tiva C Series, ThingMagic UHF Micro Reader, Farsens ROCKY100 UHF WEH Tag, and MSP430-G2x33. 


### ThingMagic Micro Reader
To interface with the Micro reader we are utilizing the MercuryAPI tool provided by ThingMagic. Because this shoudl eventually be used in an embedded system (currently the Tiva C Series chip), we are utilizing the C programming interface of the API. A guide for the ThingMagic MercuryAPI is linked [here](http://www.thingmagic.com/manuals-firmware#Mercury_API).
