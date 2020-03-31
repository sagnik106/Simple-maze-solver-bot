# Simple-maze-solver-bot
A black line maze solving bot implementing all right/left algorithm

####  _(Recommended)_ Specifications of the project:
* Arduino UNO
* 300 rpm geared motors
* L293D H bridge Motor Driver
* 3 IR sensors

#### __Pin configuration of Arduino UNO:__
###### Digital Pins:
2 - left IR module out</br>
3 - centre IR module out</br>
4 - right IR module out</br>
5 - left motor's pin on motor driver 1</br>
6 - left motor's pin on motor driver 2</br>
7 - right motor's pin on motor driver 1</br>
8 - right motor's pin on motor driver 2</br>
9 - Alternate Vcc pin</br>
10 - Alternate Vcc pin</br>

#### Steps:
1. Connect the motors to the motor driver and jumpers from arduino to the IR module and the motor driver _(as given above)_
1. Connect the battery to the motor driver
1. Upload the [code](https://github.com/sagnik106/Simple-maze-solver-bot/blob/master/maze.ino) on the arduino board
