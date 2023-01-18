# TTdactyl 64-key
A keyboard to use when cycling on a smart trainer in TT positjon

## Firmware

Brand new to QMK? Start [here](https://docs.qmk.fm/#/newbs).

The default keymap for this layout has a QWERTY base layer (0) but is
intended for running Colemak on the OS side. It has a separate key
layer (1) that forces Colemak from the QMK side in case the keyboard
has to be used with a computer that does not run Colemak. Layer 2
flips the navigation clusters around. Layer 3 is numbers and mouse
control.

### Building from the CLI

See the general [build
environment](https://docs.qmk.fm/#/getting_started_build_tools) and
[make instructions](https://docs.qmk.fm/#/getting_started_make_guide)
to get set up.

To build firmware for the Concertina without the `qmk` utility:

    make handwired/concertina/64key:default

To also flash a connected Concertina:

    make handwired/concertina/64key:default:flash
