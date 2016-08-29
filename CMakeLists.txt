cmake_minimum_required(VERSION 3.0)

# specify MCU type and include toolchain file
set(AVR_MCU atmega328p)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/utils/cmake-avr/generic-gcc-avr.cmake")

# Get the first usb device
execute_process(
    COMMAND ls /dev
    COMMAND grep cu.usb
    OUTPUT_VARIABLE USB_DEV
    OUTPUT_STRIP_TRAILING_WHITESPACE)
if(${USB_DEV})
    message(STATUS "Upload port at /dev/${USB_DEV} usb device")
    set(AVR_UPLOADTOOL_PORT /dev/${USB_DEV})
endif()

set(AVR_PROGRAMMER arduino)

project(ard)

# CPU Speed 16kHz used by delay and serial 
add_definitions(-DF_CPU=16000000)   

add_avr_executable(ard main.c)