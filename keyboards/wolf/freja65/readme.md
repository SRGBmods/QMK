# Freja 65

![Freja 65](https://i.imgur.com/SGV0j4Ah.jpeg)

The following is the QMK Firmware for the Freja 65 PCB.

* Keyboard Maintainer: [Wolf](https://github.com/ToastyStoemp)
* Hardware Supported: Freja65 PCB
* Hardware Availability: https://www.helheim.design/collections/freja65-collection/products/65-soldered-pcb

Make example for this keyboard (after setting up your build environment):

    make wolf/freja65:default

Flashing example for this keyboard:

    make wolf/freja65:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader Enter the bootloader in 4 ways: 
* **Bootmagic reset**: Hold down the key ESC key and plug in the keyboard (Top Left most switch)
* **Physical reset button**: Double tap the button labled PRESS on the back of the PCB
* **Physical boot button**: Press and hold the button labled HOLD on the back of the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` (FN + B)