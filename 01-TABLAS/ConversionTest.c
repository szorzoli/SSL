#include <assert.h>
#include "Conversion.h"

int main(void)
{
    assert(fahrenheit(0) == 32);
    assert(fahrenheit(20) == 68);
    assert(fahrenheit(40) == 104);
    assert(fahrenheit(60) == 140);
    assert(fahrenheit(80) == 176);
    assert(fahrenheit(100) == 212);
    assert(fahrenheit(120) == 248);
    assert(fahrenheit(140) == 284);
    assert(fahrenheit(160) == 320);
    assert(fahrenheit(180) == 356);
    assert(fahrenheit(200) == 392);
    assert(fahrenheit(220) == 428);
    assert(fahrenheit(240) == 464);
    assert(fahrenheit(260) == 500);    
    assert(fahrenheit(280) == 536);
    assert(fahrenheit(300) == 572);

    assert(celcius(32) == 0);
    assert(celcius(140) == 60);
    assert(celcius(320) == 160);


    return 0;
}
