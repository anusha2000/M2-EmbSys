# Block Diagram
![traffic](https://user-images.githubusercontent.com/47153476/157234890-8da64e71-f0a3-48b2-9089-54ad521b2016.PNG)


This circuit consists of 4 IR sensors, atmega8 microcontroller, 4 traffic lights.

## Components Description

### ATmega8:
The ATmega8 is a low-power CMOS 8-bit microcontroller based on the AVR RISC architecture. By executing powerful instructions in a single clock cycle, the ATmega8 achieves throughputs approaching 1 MIPS per MHz, allowing the system designer to optimize power consumption ver- sus processing speed.

### LED's:
Here LED's are used to reprent the traffic signals.In normal traffic system, we have to glow the LEDs on time basis. If the traffic density is high on any particular path, then glows green LED of that particular path and glows the red LEDs for remaining paths.


### IR sensors:
In this system IR sensors used to measure the traffic density. We have to arrange one IR sensor for each road; these sensors always sense the traffic on that particular road. All these sensors are interfaced to the microcontroller. Based on these sensors, controller detects the traffic and controls the traffic system.

## Structural Diagram
![structural](https://user-images.githubusercontent.com/47153476/157234909-8ac75052-ee4d-4ee1-b91a-920f1d396a79.PNG)

## Behavioral Diagram
![behavioral](https://user-images.githubusercontent.com/47153476/157234922-fd603c16-8cc7-4450-a3ef-1877a566a259.PNG)

# Flowchart
![flow](https://user-images.githubusercontent.com/47153476/157204899-272b0ed6-edbb-47d3-aecc-c6e5a547985c.PNG)
