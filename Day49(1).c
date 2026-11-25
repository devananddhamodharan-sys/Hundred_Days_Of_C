#include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[1005];
    if (!fgets(name, sizeof(name), stdin)) {
        return 1;
    }

    int inWord = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') break;
        if (!isspace((unsigned char)name[i])) {
            if (!inWord) {
                printf("%c.", toupper((unsigned char)name[i]));
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    printf("\n");

    return 0;
}