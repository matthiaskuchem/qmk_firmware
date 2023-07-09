# QMK Keychron Fork for Neo Layouts

## Personal Fork of QMK for Keychron
This fork is based on the [Keychron/qmk_firmware](https://github.com/Keychron/qmk_firmware) and uses the bluetooth_playground branch there for this repositories default branch matthias_layouts, because it implements a layout for the Keychron K3 Pro, which features bluetooth. The layout is based on the [Neo Layout](https://neo-layout.org/), but is not necessarily an exact implementation. Therefore I decided to use the common github username for keymap approach.

## K3 Pro

There is a keymap “matthiaskuchem” for keychron/k3_pro/iso/rgb which implements the Neo Layout for an iPad, as far as this is possilbe. It is limited to the characters available on the german mac keyboard, because the iPad does not support Unicode input at all. To use it, you need to set the keyboard layout to german in the iPadOS. It should work the same with macOS, but I didn't test it.

The layer locking is not implemented on purpose, this could be done though. See the [qmk-neo2](https://github.com/yeldiRium/qmk-neo2) Repository by [yeldiRium](https://github.com/yeldiRium) for reference.
