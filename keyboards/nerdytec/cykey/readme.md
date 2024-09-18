# Nerdytec CYKEY

![CYKEY ansi](Link to ANSI image)
![CYKEY iso](Link to ISO image)

## The PCB features:
* QMK & default compatibility
* RGB Matrix backlight
* Up to 4 keys position switch can be interchanged with encoder module.


The following is the QMK Firmware for the Destop 75% keylayout

* Keyboard Maintainer: [nerdytec](https://www.nerdytec.com/en/cykey-support/)
* Hardware Supported: DesktopPCB for nerdytec keylayout 75%, STM32F103C8T6
* Hardware Availability: https://www.nerdytec.com/en/cykey-support/

Make example for this keyboard (after setting up your build environment):

    make nerdytec/cykey/ansi_encoder:default
    make nerdytec/cykey/iso_encoder:default

Flashing example for this keyboard:

    make nerdytec/cykey/ansi_encoder:default:flash
    make nerdytec/cykey/iso_encoder:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
