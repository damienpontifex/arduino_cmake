### Dependencies

```bash
brew tap osx-cross/avr
brew install avr-gcc avr-binutils
```

### Build & Upload
```bash
mkdir build && cd build
cmake ..
make
make upload_ard
```

### Issues
`AVR_UPLOADTOOL_PORT` needs to be properly set

``bash
ls /dev/cu.*    # find listing of proper usb port
``