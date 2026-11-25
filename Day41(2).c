#include <stdio.h>

int main(void) {
    char s[1005];
    if (!fgets(s, sizeof(s), stdin)) {
        return 1;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') {
            break;
        }
        printf("%c\n", s[i]);
    }

    return 0;
}