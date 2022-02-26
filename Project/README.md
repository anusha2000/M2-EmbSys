# Density based traffic signal control signal

## Problem definition
To control the traffic signals based on the traffic density using IR sensors.


## Abstraction
Nowadays, controlling the traffic becomes major issue because of rapid increase in automobiles and also because of large time delays between traffic lights. So, in order to rectify this problem, I will go for density based traffic lights system.In this system, I will use IR sensors to measure the traffic density. I have to arrange one IR sensor for each road; these sensors always sense the traffic on that particular road. All these sensors are interfaced to the microcontroller. Based on these sensors, controller detects the traffic and controls the traffic system.

## Requirements

### High level Requirements
|ID|Description |
|---|----------|
|HLR1|Traffic signals should work on the time basis|
|HLR2|IR sensor should sense the traffic on particular road|
|HLR3|Once the traffic is clear in the particular road the traffic signal should come back to normal mode|

### Low level requirements
|HLID|LLID|Description|
|----|----|------------|
|HLR1|LLR1|If two of the signals are red, the other one should be yellow and another one should be green|
|HLR2|LLR1|If there is traffic on any road then that particular sensor should give logic 0|
|     |LLR2|Then give green signal to that path and red to all other paths|

## Block Diagram
![traffic](https://user-images.githubusercontent.com/47153476/155757605-6d51897b-782b-45b6-bc5d-fe4afba0b5ee.PNG)

This circuit consists of components like
* ATmega8 microcontroller
* IR sensors
* Traffic lights
* Power supply

## Components Description

### ATmega8: 
The ATmega8 is a low-power CMOS 8-bit microcontroller based on the AVR RISC architecture. By executing powerful instructions in a single clock cycle, the ATmega8 achieves throughputs approaching 1 MIPS per MHz, allowing the system designer to optimize power consumption ver- sus processing speed.

### LED's:
Here LED's are used to reprent the traffic signals.In normal traffic system, we have to glow the LEDs on time basis. If the traffic density is high on any particular path, then glows green LED of that particular path and glows the red LEDs for remaining paths.


### IR sensors:
In this system IR sensors used to measure the traffic density. We have to arrange one IR sensor for each road; these sensors always sense the traffic on that particular road. All these sensors are interfaced to the microcontroller. Based on these sensors, controller detects the traffic and controls the traffic system.

## Advantages
Density based traffic signal control have many advantages compared totime based traffic control.
* We can save considerable amount of time.
* We can avoid unnecessary occurence of traffic jams which causes public inconvenience.
* Low power consumption.
* It provide easy access in the traffic light.
* Low cost to design the circuit, maintenance of the circuit is good.

## Applications
* There is no need of traffic inspector at the junctions for supervising the traffic to run smoothly.
* The intelligent work which is done by traffic inspector will be perfectly done by microcontroller in the circuit with the help of sensors and the program which is coded to the microcontroller.
