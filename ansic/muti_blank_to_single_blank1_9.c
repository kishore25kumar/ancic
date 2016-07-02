//
// Created by kishore on 22/6/16.
//

#include <stdio.h>

int main() {
    int c;
    int prevSpace = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (prevSpace == 0) {
                putchar(c);
            }
            prevSpace = 1;
        } else {
            putchar(c);
            prevSpace = 0;
        }
    }
}