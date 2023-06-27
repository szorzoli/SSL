#include<stdio.h>
#include "Conversion.h"

float celcius (float fahr){
    return (5.0/9.0)*(fahr-32);
}

float fahrenheit (float cel){
    return (cel*(9.0/5.0))+32;
}


