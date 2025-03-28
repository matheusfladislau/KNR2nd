//1.18 Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.

#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxlen);

int main() {
	int len;
	char line[MAXLINE];

	while ((len = my_getline(line, MAXLINE)) >= 0) {
		if (len >= 1) {
			printf("%s", line);
		}
	}
	return 0;
}

int my_getline(char line[], int maxlen) {
	int c, i;
	i = 0;

	while (i < maxlen-1 && (c = getchar()) != EOF && c != '\n') {
		if (i > 0 || (c != '\t' && c != ' ')) {
			line[i] = c;
			++i;
		}
	}

	while (i > 0 && (line[i-1] == '\t' || line[i-1] == ' ')) {
		--i;
	}

	if (i > 0 && c == '\n') {
		line[i] = '\n';
		++i;
	}

	line[i] = '\0';
	return i;
}
