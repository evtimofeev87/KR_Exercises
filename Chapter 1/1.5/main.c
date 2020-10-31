/*
1.5 Modify the temperature conversion program to print
    a heading above the table.
*/

#include <stdio.h>

int main() {

    int step, lower;
    float fahr, celsius;

    step = 20;
    lower = 0;

    for(fahr = 300; fahr >= lower; fahr -= 10){
        celsius = (5.0/9.0)*(fahr - 32.0);
        printf("%6.1f\t%6.1f\n", fahr, celsius);
    }

    return 0;
}