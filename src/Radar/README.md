### The Radar :

## Goal : 
Our main goal for the radar was to be able to retrieve all data sent by the radar through a ROS2 publisher. After correctly configuring the hardware, the aim was to code the ROS2 publisher. Having no prior knowledge of the ARS-408-21 radar manufactured by Continental, nor CAN-Bus design, the hardware configuration took longer than expected.

## Methods and Issues :

# Description of ARS-408-21 : 
According to technical documentation and a state of the art review on radars, here is a brief overview of Continental’s ARS-408-21. [Insert description]
This radar is used for detecting objects in the automotive industry. It can scan both nearby or far range areas depending on its configuration. The far range setting enables it to detect objects as far as 250 metres, whereas its close range can only reach objects less than 70 metres away but has a wider Field of View. This radar is not fitted with a single antenna, but multiple. This enables it to detect several objects simultaneously. Here is a simplified description of how it works :
Using the Doppler principle, it detects a multitude of points in space, a component processes this information and gathers the points into clusters if requested by the user. These clusters, along with additionnal information, are sent to a CAN transceiver (Controller Area Network) that then translates the data into CAN protocol standard messages. These messages are transmitted, according to the protocol, via two data wires, CANH and CANL. This sensor can then be integrated in a custom CAN BUS. When this bus is operational, messages can be sent to the radar to change its settings, these messages are detailed in the radar’s technical documentation.

# Description of CAN-USB :
# Implementing drivers : 
In order to use the CAN to USB converter, the correct drivers had to be installed. According to the documentation provided by ESD , socketCAN , an integrated Linux driver , is sufficient. However, a windows application was also provided and used in parallel to make sure that the issues encountered were less likely to be software related.

# Setting up CAN-BUS :
I had to set up a CAN BUS comprised of the Radar, the CAN-USB converter and 2 termination resistors, although arguably these resistors might be more important in longer buses that incorporate far more sensors. The BUS needs to be grounded at one place, I used the Ground of the CAN-USB. According to CAN standards, the bus obeyed the most basic and crucial rules. The length of the BUS is to be considered too, this will be discussed in the Issues and tests part of this report. [Should normalize the spelling of can bus]
Issues and tests :
-No data is received from the radar, I looked at many angles to try and solve the problem :
-It might be the fault of the 120 Ohm termination resistors
-It might be the length of the radar’s cable
-it might be the connections between the cables
-It might be the power available to the radar (insufficient power)
-It might be the setting of the experiment (Indoors vs outdoors)
-It might be the software configuration on my Linux PC
-It might be the ESD CAN -USB transceiver’s fault
-It might be the Radar’s transceiver’s fault
-It might be a grounding issue
-It might be a data rate issue 
-It might be a problem with the radar’s configuration, since it can be configured by sending a message to the BUS

Extra test :
In order to further strengthen my hypothesis that the radar is dysfunctional, I performed an extra experiment. I used a CAN communication module that can send messages to a CAN BUS. To send these messages, I wrote a script using an open source C++ Library specific to the microprocessor I used, specifically an ESP8266. I was able to correctly configure a simple CAN BUS using the integrated Linux socketCAN drivers. The following is a picture of the final setup :
 
![CANUSBsimpleSetup](https://github.com/LiamKaist/TricycleResearch/assets/117256858/63c3bfba-daea-49d8-a666-00e248d66d73)

This experiment enabled me to check whether I had fundamentally misunderstood a concept of CAN BUS configuration. I came to the conclusion that the radar is still at the centre of the issue. 
The CAN standard messages were transferred seamlessly, I could send messages to the BUS and listen to the messages being sent on it, simultaneously. Here is the output of the candump (Utility that displays CAN messages in their human readable format. 
 
![CANDump](https://github.com/LiamKaist/TricycleResearch/assets/117256858/9bec96fe-8b18-4ed4-889a-4ed96711af75)

# Results/Conclusion :
The only conclusion I have managed to come up with , after all this research, is that there is a problem with the Radar itself. It does not send any information whatsoever, whether we test it indoors or outdoors. 

