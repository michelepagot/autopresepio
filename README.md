# autopresepio
SW to animate 2016 Presepio. The idea is to use :
   * [adafruit motor shield v2](https://github.com/adafruit/Adafruit_Motor_Shield_V2_Library) to move around some stuff
   * [FastLed](https://github.com/FastLED/FastLED) to control a WS2811 powered 50 led strip

But also to give a try to [PlatformIO](https://github.com/platformio) ... and it woks pretty well!!!

# Project config and toolchain
Tested on a windows machine 
## Prerequisite
   * Miniconda
   * Git
   * cmd default Windows shell

## Python env with miniconda
```
> conda create --name arduino python=2
> activate arduino
```

## PlatformIO install
```
> pip install platformio
```

## Init project
```
> mkdir autopresepio
> cd autopresepio
> platformio init --board uno
```

## Build and load
```
> platformio run
> platformio run --target upload
```

## Use external dependency
```
> cd lib
> pio lib install FastLED
```
