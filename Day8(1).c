#include <stdio.h>

int main(void) {
    char ch;
    if (scanf("%c", &ch) != 1) {
        return 1;
    }

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Alphabet\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase Alphabet\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }

    return 0;
}