//
// Created by kishore on 22/6/16.
//

#include <stdio.h>

int main() {
    int c;
    int newLinePrinted = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (newLinePrinted == 0) {
                putchar('\n');
                newLinePrinted = 1;
            }
        } else {
            putchar(c);
            newLinePrinted = 0;
        }
    }
}

