# Controlling-Robotic-Arm-using-Hand-Gesture
In this project, first, before directly working on the hardware, the first step that we are following is simulation execution. We are using Arduino IDE and its supportive library
to simulate the functions .The first part of the execution
involves collecting the data of potentiometer attached in hand gloves which gives the finger movement information. The
potentiometer value is collected in array and sent to Arduino
UNO using RF transmitter.The value is then converted to angle
and specific finger servo motor rotates simultaneously upto
that angle. RF transmitter in person’s hand is operated using
Arduino Nano which sends array data to UNO.
Next part involves the controlling of the robotic arm, the
potentiometer value is converted to angle by optimisation and
visuals and the servo attached to robotic finger via thread
rotates and moves the motor. Next, we give the options for
the operator to operate the system via Blynk App .The slide
assigned to 5 potentiometer assigns the value. The Wi-fi is
established using ESP and Wi-fi library in IDE and entering
the SSID,host-name and password of Wi-fi.The Blynk app
connected via Wi-fi transfers the data to ESP32 module which
sends the array containing value to Arduino UNO using I2C.

