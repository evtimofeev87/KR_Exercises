/*
1.9 Write a program to copy its input to its output,
    replacing each string of one or more blanks
    by a single blank.
*/

#include <stdio.h>

int main() {

    int prevIsBlank = 0;
    int curIsBlank = 0;
    int symbol;

    while((symbol = getchar()) != EOF){
        curIsBlank = symbol == ' ';
        if(!curIsBlank || !prevIsBlank){
            putchar(symbol);
        }
        
        prevIsBlank = curIsBlank;
    }

    return 0;
}