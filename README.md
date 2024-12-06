# Skyloop

Idea 

A device shaped like a hexagonal loop that uses sensors to monitor the 3 laser signals. These sensors detect the passing of a drone (when the laser signal is interrupted), outputting this detection in the form of a buzzer and glowing LED strips in green.

Problem Statement
To be able to make suspended loops, that can be used by beginners to learn the basics of flying and racing drones. A lot of people enjoy drones but don’t know how / are scared to fly them. This project helps them practice, get comfortable and enjoy the experience.

Constraints
1. The device had to be big enough to fit a drone 
2. It must be light enough to hang from a ceiling
3. The device must be stable enough for drones to crash into without being damanged 

Final Solution:
The hexagonal loop would be powered by a 5V power supply along with an ESP-32 board. The base of the hexagonal loop is housed with 3 lasers pointing upwards, with the ray directly reaching the sensors mounted above. The buzzer can also be mounted on either edge as long as it is connected securely. When the drone passes through, the laser signal is interrupted, which transmits this data to the ESP-32. As the code follows, the LED strip would light up in green. The hexagonal loop has the LED strips glowing in blue when the drone is not detected. The code uses the FastLED library to code the LED strips.

Materials:

Laser Sensor module (LDR also works)

Laser module

Addressable WS2812b LED strip

5V buzzer

ESP-32

5V power supply, adapter

Voltage regulator (if the power supply is too strong)

Wire rolls

Jumper wires

Wire cutter

Small screwdriver

Voltmeter

Jute rope to hang the loops

Feviquick for assembly

White Acrylic Sheets


Machines Used:

Laser cutter

Power Drills 

