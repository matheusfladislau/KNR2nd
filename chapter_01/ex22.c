//1-22 Write a program to ``fold'' long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column. 
#include <stdio.h>

#define COLUMN   8
#define NOSPACE -1

int main() {
    int c, i = 0, blank_space = NOSPACE;
    int arr[COLUMN];

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            blank_space = i;
        }

        if (i == COLUMN) {
            if (blank_space == NOSPACE) {
                for (int y = 0; y < COLUMN; ++y) {
                    putchar(arr[y]);
                }
                putchar('\n');
                i = 0;
            } else {
                for (int y = 0; y < blank_space; ++y) {
                    putchar(arr[y]);
                }
                putchar('\n');

                for (int y = blank_space + 1; y < i; ++y) {
                    arr[y - blank_space - 1] = arr[y];
                }

                i -= blank_space + 1;

                arr[i] = c;
                ++i;

                blank_space = NOSPACE;
            }
        } else {
            arr[i] = c;
            ++i;
        }
    }

    for (int j = 0; j < i; ++j) {
        putchar(arr[j]);
    }

    return 0;
}

