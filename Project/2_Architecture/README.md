# Block Diagram

![traffic](https://user-images.githubusercontent.com/47153476/155757605-6d51897b-782b-45b6-bc5d-fe4afba0b5ee.PNG)

## Components Description

### ATmega8:
The ATmega8 is a low-power CMOS 8-bit microcontroller based on the AVR RISC architecture. By executing powerful instructions in a single clock cycle, the ATmega8 achieves throughputs approaching 1 MIPS per MHz, allowing the system designer to optimize power consumption ver- sus processing speed.

### LED's:
Here LED's are used to reprent the traffic signals.In normal traffic system, we have to glow the LEDs on time basis. If the traffic density is high on any particular path, then glows green LED of that particular path and glows the red LEDs for remaining paths.


### IR sensors:
In this system IR sensors used to measure the traffic density. We have to arrange one IR sensor for each road; these sensors always sense the traffic on that particular road. All these sensors are interfaced to the microcontroller. Based on these sensors, controller detects the traffic and controls the traffic system.
