//1-23 Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments don't nest.
#include <stdio.h>

#define NOT_BAR 0
#define BAR     1

#define IN  1
#define OUT 0

int main() {
    int c, position = 0, num_line = 1; 
    int first_digit = NOT_BAR;
    int state = OUT;
    int is_comment = -1;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++num_line; position = 0; state = OUT; first_digit = NOT_BAR; is_comment = -1;
        } else {
            if (c != ' ' && c != '\t' && state == OUT) {
                state = IN;
            }

            if (state == IN && position < 2) {
                if (position == 0) {
                    first_digit = c == '/';
                } else {
                    if (first_digit == BAR && c == '/') {
                        is_comment = 1;
                    } else {
                        is_comment = 0;
                    }
                }
                ++position;
            }
        }

        if (is_comment != 1) {
            putchar(c);
        }
    }

    return 0;
}
