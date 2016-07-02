//
// Created by kishore on 22/6/16.
//

#include <stdio.h>

int main() {
    int c;
    int blanks = 0, tabs = 0, newLines = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            newLines++;
        } else if (c == '\t') {
            tabs++;
        } else if (c == ' ') {
            blanks++;
        }
    }

    printf("Processing is done \n");
    printf("Blanks: %d, Tabs: %d, NewLines: %d", blanks, tabs, newLines);
}