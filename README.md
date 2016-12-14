# autopresepio
SW to animate 2016 Presepio. The idea is to use :
   * [adafruit motor shield v2](https://github.com/adafruit/Adafruit_Motor_Shield_V2_Library) to move around some stuff
   * [FastLed](https://github.com/FastLED/FastLED) to control a WS2811 powered 50 led strip
But also to give a try to [PlatformIO](https://github.com/platformio) ... and it woks pretty well!!!

# Project config and toolchain

## Python env with miniconda
conda create --name arduino python
activate arduino

## PlatformIO install
pip install platformio

## Init project
mkdir autopresepio
cd autopresepio
platformio init --board uno

## Build and load
platformio run
platformio run --target upload

## Registration needed to use Unitesting
platformio account register -u <myemail@yuppy.io>
pio account login

## Run test
platformio test -e uno --verbose

## Try submodule to import dependency
cd lib
git submodule add https://github.com/kroimon/Arduino-SerialCommand.git SerialCommand
