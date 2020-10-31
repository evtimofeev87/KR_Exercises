/*
1.4 Write a program to print the corresponding
    Celsius to Fahrenheit table.
*/

#include <stdio.h>

int main() {
    
    float celsius, fahr;
    int lower, upper, step;

    lower = -100;
    upper = 100;
    celsius = lower;

    printf("\nCelsius to Fahrenheit Table\n\n");

    while(celsius <= upper){
        fahr = (celsius * 9.0 / 5.0) + 32;
        printf("%6.1f\t%6.1f\n", celsius, fahr);
        celsius += 10;
    }

    return 0;
}