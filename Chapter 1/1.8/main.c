/*
1.8 Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main()
{
    int blanks, tabs, newlines;
    blanks = tabs = newlines = 0;

    int symbol;

    while ((symbol = getchar()) != EOF)
    {
        switch (symbol)
        {
        case ' ':
            blanks++;
            break;
        case '\t':
            tabs++;
            break;
        case '\n':
            newlines++;
            break;
        }
    }

    printf("\nblanks - %d\ntabs - %d\nnewlines - %d", blanks, tabs, newlines);

    return 0;
}