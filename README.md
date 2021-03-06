# raspberrypi-project
Raspberry pi project to create a rover. The rover's name is Wanderlust.

## Compile and run
On the Raspberry Pi, the g++ version is 4.6 and doesn't support -std=c++11. That is why we use g++-4.7.

The install command

    sudo apt-get install g++-4.7
    
The compile command

    g++-4.7 -std=c++11 file.cpp -lwiringPi

Currently it is also possible to use the Makefile

    make
    ./build/runner

## Captain's log

5 sep 2015
* [Raspberry Pi][1] running [Raspbian][2] OS
* Installed [Wiring Pi][3]
* First LED functionality added

6 sep 2015
* First attempt to control a stepper motor
* Controlling a 6V motor
* Configuring WiFi adapter, connects on boot (finally)

7 sep 2015
* Built the rover (first design)
* Coded the first test ride
* Runned the first test ride (successful)
* Named the rover Wanderlust
* Added basic OO classes for the motors

8 sep 2015
* Rebuilt the rover (second design)
* Changed the code for the test ride
* Changed the Port class

25 may 2017
* Dusted off rover
* Tried to fix compilation issues of the Port class

3 jun 2017
* Fixed compilation issues of the Port class

15 jun 2018
* Had to reflash the Raspbian image on the Raspberry Pi
* Abandoned the approach with multiple classes
* Put working version back and used clearer method names
* Added datetime to loggings

[1]: https://www.raspberrypi.org/
[2]: https://www.raspberrypi.org/downloads/raspbian/
[3]: http://wiringpi.com/
