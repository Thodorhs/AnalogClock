# Lego_NXT-Analog_Clock
Firmware for implementing display functions and displaying an Analog clock for Mindstorms NXT .
Used PIT timer, AIC interrupts, SSC-PIO for sound, SPI-PIO for controlling the LCD chip.
NXT uses Atmel® 32-bit ARM® processor, AT91SAM7S256.
This repo was created based on the Atmel manual for AT91SAM ARM-based Flash MCU.

# Prerequisites
- make
- (ubuntu easier setup)
- Lego toolchain repo

# How to run
In the makefile change the PREFIX (first line) to the lego toolchange dir e.g PREFIX=../lego-toolchain_23-master
