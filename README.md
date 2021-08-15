# Ultrasonic Sensor Alarm System

This project is a microprocessor course midterm assignment. 

## Components and Supplies

* Arduino UNO
* HC-SR04 ultrasonic module
* Buzzer
* Breadboard (generic)
* Led (red)
* Resistor 220 ohm
* Jumper wires (generic)

## About This Project

We are developing an arduino project using ultrasonic distance sensor. It can have different uses. Parking sensor for cars or an alarm for thieves 
when mounted on a door. First, let's take a look at the working principle of the sensor. 

### How Does a Ultrasonic Module Work?

![](https://github.com/damlacim/ultrasonic-sensor-alarm-system/blob/main/sensorwork.jfif)

This module consists of two drums, one of which is a emitter that emits ultrasound and other is receiver which receives the reflected ultrasound 
from the object. The emitter drum emits ultrasound when we trigger the module using the trigPin by sending a 10 microseconds high pulse.As soon as 
the ultrasound is emitted through the emitter the module makes the echoPin high. Emitted ultrasound travels forward till it gets reflected by object 
and then travels backward. The reflected ultrasound is detected by the receiver. When the reflected ultrasound is received by the receiver, echoPin 
is made low. Now we have the time take by the ultrasound to reach the object and again reach the source which is also equal to the duration for which 
the echoPin was high. This time is stored in the microcontroller. Therefore travel time of ultrasound between just source to object is half the time 
take to travel source-object-source we know that:

```
Distance = Speed x Total time
```

But time take to travel distance is half of total time:

![](https://github.com/damlacim/ultrasonic-sensor-alarm-system/blob/main/measure.jfif)

```
Distance = (Time / 2) x Speed
Distance = (Time / 2) x 29.1
```

Where 29.1 is the speed of ultrasound in centimeter/microseconds.













