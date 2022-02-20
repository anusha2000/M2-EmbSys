# CASE STUDY – 1

## PASSWORD BASED DOOR LOCKING SYSTEM

### Block diagram:

![password](https://user-images.githubusercontent.com/47153476/154852732-e23035f8-e4ae-4257-86ef-15503728255f.PNG)

Block diagram includes microcontroller,LCD display,keypad and motor drive components.
### Components description:

* Microcontroller: This is the CPU (central processing unit) of our project. We are going to use a microcontroller of 8051 family. The various functions of microcontroller are like:
  - Reading the digital input from Keypad
  - Sending this data to LCD so that the person operating this project should read the password 
  - Sensing the password using keypad and to check whether it is a correct password or a wrong password and rotate the stepper motor if the password entered is a correct password.

* LCD:This section is basically meant to show up the status of the project. This project makes use of Liquid Crystal Display to display / prompt for necessary information.
* Keypad: User will enter the password using the keypad. Various keys of keypad are as following,
  - 0 to 9
  - Enter
  - Escape

## High level requirements

|ID | Description |
|----|------------|
|HLR1|

## Low level requirements










# CASE STUDY – 2

## ATM MACHINE SECURITY SYSTEM USING GSM AND MEMS SENSOR


### Block diagram:

![ATM](https://user-images.githubusercontent.com/47153476/154840587-730e8c1f-36db-4e2e-a464-6cd413f43cae.PNG)

Block diagram involved in this project is a Power Supply, a LCD to display the concerned information, a GSM is interfaced to the Microcontroller through MAX 232, MEMS is interfaced through ADC 0804.
### Components description:

*	GSM (Global System for Mobile Communications):
In this system using the GSM modem when some accidents or robberies is happen, then it will send the message to according to Bank authority and near police station (PS) corresponding to the controller.

*	MEMS Sensor(Micro Electro Mechanical Systems):
This is the input functional block which is used to identify the tilts that are occurred in the ATM machine when a thief tries to break open the ATM machine.

*	Motor:
Motor is used for closing the door when thieves are entering door will be closed automatically by using DC motor.

*	MAX 232:
It is serial line driver used to establish communication between microcontroller and PC (or smart card reader).

*	LCD:
This section is basically meant to show up the status of the project. This project makes use of Liquid Crystal Display to display / prompt for necessary information.

*	ADC 0804 Section:
The ADC0808 data acquisition component is a monolithic CMOS device with an 8-bit analog-to-digital converter, 8-channel multiplexer and microprocessor compatible control logic. The 8-bit A/D converter uses successive approximation as the conversion technique. The converter features a high impedance chopper stabilized comparator, a 256R voltage divider with analog switch tree and a successive approximation register. The 8-channel multiplexer can directly access any of 8-single-ended analog signals.  The device eliminates the need for external zero and full-scale adjustments.

*	Relay Section:
A relay is an electrical switch that opens and closes under the control of another electrical circuit. In the original form, the switch is operated by an electromagnet to open or close one or many sets of contacts. A relay is able to control an output circuit of higher power than the input circuit, it can be considered to be, in a broad sense, a form of an electrical amplifier.

## High level requirements:
|ID	| Description|
|----|-----------|
|HLR1|	when the accidents or robbery happens, the GSM will send message to the bank authority and near police station| 
|HLR2	|MEMS sensor should identify the tilts that occurred when the thief tries to break the ATM machine|
|HLR3	|The microcontroller gives command to shut down the door in order to avoid the thief to run away |

## Low level requirements:
|ID |	Description|
|----|-----------|
|LLR1|	MAX 232 establish communication between microcontroller and PC|
|LLR2	|LCD should displays the status of the ATM machine |
