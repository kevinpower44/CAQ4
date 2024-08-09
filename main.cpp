#include "mbed.h"

/*
Write a program to perform the following actions.
initialise int variables a = 10, b = 20, c = 30
add values of a and b, store it in a new int variable d and print value of variable d
subtract variable c from d and store in new int variable e and print the value of variable e
Share the github link to the program in the answer section below.
*/
int a = 10;
int b = 20;
int c = 30;
int d = a + b;
int e = d - c;

int main() {

    int d = a + b;
    printf("the value of d = %d\n", d);
    
     int e = d - c;
    printf("the value of e = %d\n", e)
    
;
}