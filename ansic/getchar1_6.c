//
// Created by kishore on 22/6/16.
//

#include <stdio.h>

int main() {
    int c;
    while (c = getchar() != EOF) {
        if (c == 0) {
            printf("The value is 0");
        }

        if (c == 1) {
            printf("The value is 1");
        }
    }
}

