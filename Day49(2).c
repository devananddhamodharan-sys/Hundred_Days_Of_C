#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char name[1005];
    if (!fgets(name, sizeof(name), stdin)) {
        return 1;
    }

    size_t len = strlen(name);
    while (len > 0 && (name[len - 1] == '\n' || isspace((unsigned char)name[len - 1]))) {
        name[--len] = '\0';
    }

    int lastSpace = -1;
    for (int i = (int)len - 1; i >= 0; i--) {
        if (isspace((unsigned char)name[i])) {
            lastSpace = i;
            break;
        }
    }

    if (lastSpace == -1) {
        printf("%s\n", name);
        return 0;
    }

    int inWord = 0;
    for (int i = 0; i < lastSpace; i++) {
        if (!isspace((unsigned char)name[i])) {
            if (!inWord) {
                printf("%c.", toupper((unsigned char)name[i]));
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf(" %s\n", name + lastSpace + 1);
    return 0;
}