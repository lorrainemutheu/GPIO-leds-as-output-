#include <avr/io.h>      //IO library
#include <util/delay.h>  //delay library
#include <stdint.h>      //datatypes library

int main(void){ 
  DDRD = 0b11111100;     //set direction of all bits except bit 0 and 1 for port D to output
  int counter;          //set datatype of counter to integer

  while(1){
    //initialize counter to 4
    //alternate between PD4 and PD7 in lighting the LEDS with a delay of 1s
    for(counter = 4; counter <= 128; counter*=2){
        PORTD = counter;
        _delay_ms(1000);
     }
  }
}
