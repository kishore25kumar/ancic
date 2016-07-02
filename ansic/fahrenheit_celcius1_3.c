//
// Created by kishore on 18/6/16.
//

#include <stdio.h>

int main() {
    int min, max, step;
    float celcius, farhenheit;

    min = 0;
    max = 300;
    step = 20;

    farhenheit = min;

    printf("Fahrenheit to Celcius converstion \n");

    while(farhenheit <= max) {
        celcius = 5.0 * (farhenheit - 32.0) / 9.0;
        printf("%3.0f\t%6.1f\n", farhenheit, celcius);
        farhenheit = farhenheit + step;
    }
}