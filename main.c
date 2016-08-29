
/*  Arduino schematic for pin number to port mappings
    https://www.arduino.cc/en/uploads/Main/Arduino_Uno_Rev3-schematic.pdf
*/

#include <avr/io.h>
#include <util/delay.h>

// DDRx = Data Direction Register
// PORTx = Pin Output Register
// PINx = Pin Input Register
// x = GPIO port name (A, B, C or D)

int main(void)
{
    DDRB |= (1<<PIN5);      // Set arduino pin 13 as output matching PB5 on atmega
    
    for (;;) 
    {
        // LED on
        PORTB |= (1<<PIN5); // Set the arduino output 13 HIGH
        _delay_ms(100);

        // LED off
        PORTB &= ~(1<<PIN5);    // Set the arduino output 13 LOW
        _delay_ms(500);
    }

    return 0;
}
