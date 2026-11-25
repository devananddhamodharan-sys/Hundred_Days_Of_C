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

    long vowels = 0, consonants = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            char lower = (char)tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);
    printf("Vowels = %ld, Consonants = %ld\n", vowels, consonants);
    return 0;
}