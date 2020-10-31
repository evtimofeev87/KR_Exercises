/*
1.2 Experiment to find out what happens when printf's argument
    string contains \c, where c is some charecter not listed above.
*/

#include <stdio.h>

int main(){
    printf("Hello\b\bt");
    return 0;
}

//unknown escape sequence