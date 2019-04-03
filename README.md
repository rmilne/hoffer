# hoffer

Change a desktop to a picture of *The Hoff* via usb ATTINY device that acts as a keyboard.

A simple BadUSB / USB-Rubber-Ducky based off code from https://github.com/CedArctic/DigiSpark-Scripts but improved for Windows 10.

## Windows
Uses powershell to download resources and set the background.

## OSX
Bash script chains into a swift script to set the desktop.

Swift script from: https://github.com/scriptingosx/desktoppr
I added proper fit to screen to it.
### Note
usbconfig.h in the Digispark libraries must be changed to a mac keyboard usb id/vendor to avoid being prompted to setup the keyboard on first plugin.

# TODO
More hoffs, random hoff for each run


