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
