ARDUINO PROJECTS BOOK

LED max limi is about 23mA
    PAGE 30
    V = I * R
    I = V / R
    I = 5 Volt / 220 Ohm = 0.02272727272 A => 23 mA

Resistors
    BlueBackground Red Red Black Black Brown = 2 2 0 10^0 ~1%
    YellowBackground Brown Black Orange Gold = 1 0 10^3 ~5% => 10k ohm ~5%


    YellowBackground Brown, Black, Orange, Gold = 1 0 * 10^3 ~5% => 10 000 ~5%
    YellowBackground Nothing, Brown, Red, Gold = 0 1 10^2 ~5% => 100 ~%
    YellowBackground Green Blue Brown Gold = 5 6 10^1 560 ohm ~5%
    BlackBackground 1N4007 MIC => Diode

Multimeter switch set to the maximum expected measurement value.
Pick the closest one according to expectactions.

https://github.com/arduino/arduino-cli

Arduino Uno	16Mhz ATmega328	2KB SRAM, 32KB flash	14	6 input, 0 output

LED RGB solder and connect
    GND to GND
    DOUT to GND
    5V to 5V

    GND to GND
    DIN to Port2
    5V to 5V

    Use a resistor between PORT2 -> DIN for a more even signal


# Commands
arduino-cli compile --fqbn arduino:avr:uno MySketch
sudo env "PATH=$PATH" arduino-cli compile --fqbn arduino:avr:uno sketch/blink/blink.sketch.ino

sudo env "PATH=$PATH" arduino-cli compile --fqbn arduino:avr:uno rgb

sudo env "PATH=$PATH" arduino-cli upload -p /dev/ttyACM1 --fqbn arduino:avr:uno rgb/

sudo env "PATH=$PATH" arduino-cli compile --fqbn arduino:avr:uno sketch/argb
sudo env "PATH=$PATH" arduino-cli upload -p /dev/ttyACM1 --fqbn arduino:avr:uno sketch/argb