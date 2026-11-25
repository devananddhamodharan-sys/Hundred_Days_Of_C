#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[256];
    if (scanf("%255s", filename) != 1) {
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    long chars = 0, words = 0, lines = 0;
    int inWord = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') {
            lines++;
        }
        if (isspace((unsigned char)ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    if (chars > 0 && lines == 0) {
        lines = 1;
    }

    fclose(fp);
    printf("Characters = %ld, Words = %ld, Lines = %ld\n", chars, words, lines);
    return 0;
}