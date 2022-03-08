# Density based traffic control system

## Tabel of Content
  1. [Abstract](#abstract)
  
  2. [Introduction](#introduction)
   
  3. [Purpose](#purpose)
   
  4. [Requirements](#requirements)
   
     * [High Level Requirements](#high-level-requirements)
   
     * [Low Level Requirements](#low-level-requirements)
    
  5. [Block Diagram](#block-diagram)
   
  6. [Components description](#components-description)
   
       * [Sensors](#sensors)
       
       * [Actuators](#actuators)
   
   7. [Flow chart](#flow-chart)
   
   8. [Circuit Diagram](#circuit-diagram)
  
   9. [Description of schematic](#description-of-schematic)
    
   10. [Results](#results)
   
   10. [System Testing](#system-testing)
   
   10. [Test Plan and Output](#test-plan-and-output)

## Abstract
In present, vehicular traffic is increasing throughout the world, especially in large urban areas. As the number of road user's increase constantly and current resources & infrastructures being limited; a smart traffic control will become a very important issue in the future. These needs have led to an ever increasing demand for an " intelligent " traffic control system. Therefore, optimization of traffic control to better accommodate this increasing demand is needed. This project will demonstrate the optimization of traffic lights in a city using wireless sensors. Traffic light optimization is a tough problem. With multiple junctions, the complexity increases as the state of one light node influences the flow of traffic towards many other nodes. proposing a traffic light controller that allows us to control and study different situations of traffic density. We sense the density of traffic using infra-red sensors. The key role behind the implementation of the " Traffic density based light control system " is to make use of an ATmega8 controller which performs processing of the real time data provided by the infra-red sensors, eventually controlling the traffic flow via the LED traffic lights.

## Introduction
In  today’s  high  speed  life,traffic  congestion  becomes  a serious issue in our day to day activities. It brings down the productivity of  individual and thereby the society as lots of work hour is wasted in the signals. High volume of vehicles,  the inadequate  infrastructure  and the  irrational distribution of the signaling  system are  main reasons  for this  chaotic  congestions.  It  indirectly  also  adds  to  the increase in  pollution level as engines  remain on in  most cases,  a  huge  volume  of  natural  resources in  forms  of petrol  and  diesel  is  consumed  without  any  fruitful outcome. Therefore, in order to get rid of these problems or at least reduce them to significant level, newer schemes need  to  be  implemented  by  bringing  in  sensor  based automation  technique  in  this  field  of  traffic  signaling system. 

## Purpose
The main objective of this project is to control the traffic lights or signal based on the density of the vehicles in particular lane.In this system, IR sensors are used to evaluate the density of the vehicles which are fixed within a fixed space.

## Requirements
### High level Requirements
|ID|Description |
|---|----------|
|HLR1|Traffic signals should work on the time basis|
|HLR2|IR sensor should sense the traffic on particular road|
|HLR3|Once the traffic is clear in the Respected road the traffic signal should come back to normal mode|

### Low level requirements
|HLID|LLID|Description|
|----|----|------------|
|HLR1|LLR1|If two of the signals are red, the other one should be yellow and another one should be green|
|HLR2|LLR1|If there is traffic on any road then that particular sensor should detect the traffic|
|     |LLR2|Then give green signal to that path and red to all other paths|

## Block Diagram
![traffic](https://user-images.githubusercontent.com/47153476/157258823-d98c107e-3678-4e4e-a3e4-803ae76c10ca.PNG)
This circuit consists of components like
* ATmega8 microcontroller
* IR sensors
* Traffic lights
* Power supply

## Components description

* __ATmega8__ : The ATmega8 is a low-power CMOS 8-bit microcontroller based on the AVR RISC architecture. By executing powerful instructions in a single clock cycle, the ATmega8 achieves throughputs approaching 1 MIPS per MHz, allowing the system designer to optimize power consumption ver- sus processing speed.

#### Sensors
 * __IR Sensor__ :In this system IR sensors used to measure the traffic density. We have to arrange one IR sensor for each road; these sensors always sense the traffic on that particular road. All these sensors are interfaced to the microcontroller. Based on these sensors, controller detects the traffic and controls the traffic system.
 
 #### Actuators
 * __LED's__ : LED's are binary actuator. Here LED's are used to reprent the traffic signals.In normal traffic system, we have to glow the LEDs on time basis. If the traffic density is high on any particular path, then glows green LED of that particular path and glows the red LEDs for remaining paths.



## Circuit diagram
![circuit_diagram](https://user-images.githubusercontent.com/47153476/157261236-cbbb542e-26a5-405e-a2ac-a112edce1ce1.PNG)

## Description of schematic
* Connect four IR sensors to PORT C.
* Connect LEDs to PORT B and PORT D.
* Arrange all this LED’s same as like traffic lights.
* Arrange one IR sensor for each road.
* Initially traffic system works based on time basis.
* if any of the sensor detects, then the system allows the traffic of that particular path by glowing GREEN light.

## Flow chart
![flowchart1](https://user-images.githubusercontent.com/47153476/157250811-38f52d40-90bd-4d28-8541-006d4052a1b5.PNG)

## Results
|Case 1: traffic density is high at Road-1 | Case 2: traffic density is high at Road-2 |
|-----|-------|
|![1](https://user-images.githubusercontent.com/47153476/157268509-681b85a3-3ff0-4e2a-92d5-564702bd02de.PNG)|![2](https://user-images.githubusercontent.com/47153476/157268548-ea5642e1-5abe-4c82-9b26-563920b84ace.PNG)|


| Case 3: traffic density is high at Road-3 | Case 4: traffic density is high at Road-4 |
|------------|------------------|
|![3](https://user-images.githubusercontent.com/47153476/157268579-65023b1b-cf57-4285-9712-c3ac4a9f8ba2.PNG)|![4](https://user-images.githubusercontent.com/47153476/157268598-22dbbe1f-ffa6-4cc8-9b48-cc51bca5388a.PNG)|






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
