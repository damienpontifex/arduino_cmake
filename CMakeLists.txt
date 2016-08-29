cmake_minimum_required(VERSION 3.0)

# specify MCU type and include toolchain file
set(AVR_MCU atmega328p)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/generic-gcc-avr.cmake")
set(AVR_UPLOADTOOL_PORT /dev/cu.usbmodem1421)
set(AVR_PROGRAMMER arduino)

project(ard)

add_definitions(-DF_CPU=16000000)

add_avr_executable(ard main.c)