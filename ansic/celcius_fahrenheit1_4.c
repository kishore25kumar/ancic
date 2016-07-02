//
// Created by kishore on 18/6/16.
//
#include <stdio.h>
int main() {
    float celcius, fahrenheit;
    int min, max, step;

    min = 0;
    max = 300;
    step = 20;

    celcius = min;
    printf("Celcius to Fahrenheit conversion");
    while (celcius <= max) {
        fahrenheit = ((celcius * 9.0) / 5.0) + 32;
        printf("%3.0f\t%6.2f\n", celcius, fahrenheit);
        celcius = celcius + step;
    }
}

