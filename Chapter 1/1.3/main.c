/*
1.3 Modify the temperature conversion program to print a heading
    above the table.
*/

#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("\nFahrenheit to Celsius Table\n\n");
    
    while (fahr <= upper) {
        celsius = (fahr - 32.0) * (5.0 / 9.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += 20;
    }

    return 0;
}