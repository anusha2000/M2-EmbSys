# Block Diagram
![traffic](https://user-images.githubusercontent.com/47153476/157250405-5a8e681f-4ce1-4661-b8dd-31260e143837.PNG)


This circuit consists of 4 IR sensors, atmega8 microcontroller, 4 traffic lights.

## Components Description

* __ATmega8__: The ATmega8 is a low-power CMOS 8-bit microcontroller based on the AVR RISC architecture. By executing powerful instructions in a single clock cycle, the ATmega8 achieves throughputs approaching 1 MIPS per MHz, allowing the system designer to optimize power consumption ver- sus processing speed.

* __LED's__: Here LED's are used to reprent the traffic signals.In normal traffic system, we have to glow the LEDs on time basis. If the traffic density is high on any particular path, then glows green LED of that particular path and glows the red LEDs for remaining paths.


* __IR sensors__: In this system IR sensors used to measure the traffic density. We have to arrange one IR sensor for each road; these sensors always sense the traffic on that particular road. All these sensors are interfaced to the microcontroller. Based on these sensors, controller detects the traffic and controls the traffic system.

## Structural Diagram
![structural](https://user-images.githubusercontent.com/47153476/157250426-b97a0bd1-647c-489d-a448-c44b6457ffca.PNG)

## Behavioral Diagram
![behavioral](https://user-images.githubusercontent.com/47153476/157250796-7b7d0aea-ca1c-476c-88bf-a20cce2307f3.PNG)

# Flowchart
![flowchart1](https://user-images.githubusercontent.com/47153476/157250811-38f52d40-90bd-4d28-8541-006d4052a1b5.PNG)
