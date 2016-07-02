//
// Created by kishore on 22/6/16.
//

#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
        } else if(c == '\b') {
            putchar('\\');
        } else {
            putchar(c);
        }
    }
}