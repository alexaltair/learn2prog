#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("  F      C\n");

    for (fahrenheit = lower;
         fahrenheit <= upper;
         fahrenheit = fahrenheit + step)
    {
        celsius = (5.0/9.0)*(fahrenheit - 32);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
    }
    return 0;
}