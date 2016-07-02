//
// Created by kishore on 18/6/16.
//
#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
int main() {
    int fahrenheit;

    for(fahrenheit = LOWER; fahrenheit < UPPER; fahrenheit += STEP) {
        printf("%3d\t%6.2f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32));
    }
}

