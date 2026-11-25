#include <stdio.h>

int main(void) {
    char s[105];
    if (!fgets(s, sizeof(s), stdin)) {
        return 1;
    }

    int len = 0;
    while (s[len] != '\0') {
        if (s[len] == '\n') {
            s[len] = '\0';
            break;
        }
        len++;
    }

    for (int start = 0; start < len; start++) {
        for (int end = start; end < len; end++) {
            for (int k = start; k <= end; k++) {
                putchar(s[k]);
            }
            printf("\n");
        }
    }

    return 0;
}