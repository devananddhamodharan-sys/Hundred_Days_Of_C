#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    if (scanf(" %c", &ch) != 1) {
        return 1;
    }

    char lower = (char)tolower((unsigned char)ch);

    if (lower >= 'a' && lower <= 'z') {
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}