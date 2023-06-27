#include<stdio.h>
#include "Conversion.h"

const int LOWER =  0;
const int UPPER = 300;
const int STEP = 20;

void printcelcius (float fahr){
    printf("\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3.0f %6.lf\n",fahr,celcius(fahr));
    }
}

void printfahrenheit (float cel){
    printf("\n");
    for (cel = LOWER; cel <= UPPER; cel = cel + STEP)
    {
        printf("%3.0f %6.lf\n",cel,fahrenheit(cel));
    }
}

int main(int argc, char const *argv[])
{
    float fahr, cel;

    printcelcius(fahr);
    printfahrenheit (cel);

    return 0;
}
