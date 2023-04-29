# IoT-based-universal-TVRemote

![circuit](https://user-images.githubusercontent.com/84971685/235308671-248dd48a-59d5-48cf-b552-f2afdff01e0d.png)

Features:
1) Made using Arduino (programmable).

2) Can be used with any appliances (TV/ Ac/ home theater/ radio/ Home automation).

3) Have 11 buttons for different actions to be performed.

4) Small size

5) Rechargeable

6) DIY project

![circuit diagram](https://user-images.githubusercontent.com/84971685/235308706-4652fb10-6e3b-4651-9c25-7e4bc25d7f52.png)


Working concept:
To make a universal remote, first we should know some important concepts of Infrared remote and receiver. let's understand this with a simple example.

Example:

To change a channel in Tv, IR remote will transmit a code and this code is received by TV then decoded by TV’s microcontroller and processed / channel got changed. So, to make our one we have to first know the code that is transmitted by remote. This process is called decoding, we have to make our own remote decoding system. Then we write down all the decoded values of buttons like, CH+, CH-, VOL+, VOL-, POWER, Settings.

Components used:
1) Arduino

2) IR led

3) Tactile buttons

4) 1k resistor x11

5) 220 ohms resistor

6) PCB and wires

7) Battery (3.7v)


Circuit explanation:
Making this circuit with Arduino is very simple, but if you are using Arduino’s Atmega328p chip then, you have to make general connection for clock and reset as shown in circuit diagram. Also, the ICSP (programming serial pins) are given in the schematics to upload the sketch/ change the control signals.

IR led positive terminal is connected with D3(digital pin 3) using 1k/220 ohms resistor and negative terminal is grounded. 11 Tactile switch buttons are used in this project for 11 different instructions to be processed. Each one is connected to different digital pins from D2 to D13. One terminal of each is connected with ground with 1k resistor. 2 pin headers is to supply power to the circuit and Arduino.
