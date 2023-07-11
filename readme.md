# QMK Keychron Fork for Neo Layouts

## Personal Fork of QMK for Keychron
This fork is based on the [Keychron/qmk_firmware](https://github.com/Keychron/qmk_firmware) and uses the bluetooth_playground branch there for this repositories default branch matthias_layouts, because it implements a layout for the Keychron K3 Pro, which features bluetooth. The layout is based on the [Neo Layout](https://neo-layout.org/), but is not necessarily an exact implementation. Therefore I decided to use the common github username for keymap approach.

## K3 Pro

The keymap is implemented as “matthiaskuchem” for keychron/k3_pro/iso/rgb.

The layer locking is not implemented on purpose, this could be done though. See the [qmk-neo2](https://github.com/yeldiRium/qmk-neo2) Repository by [yeldiRium](https://github.com/yeldiRium) for reference.

### Implemented Layers

You need to set the keyboard layout in the respective OS to German.

#### Mac Neo (intended for iPad)

Switch to this layer with the hardware switch on the keyboard (Mac/iOS) or by pressing `fn + y`.

It does only support the characters on the german keyboard itself, because the iPad does not support any kind of UTF keycode input. This layer was written and tested on iPad, but should work on macOS too.

#### Win QWERTZ

Switch to this layer with the hardware switch on the keyboard (Win/Android) or by pressing `fn + c`.
