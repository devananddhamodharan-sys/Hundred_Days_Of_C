#include <stdio.h>

int main(void) {
    char s[1005];
    if (!fgets(s, sizeof(s), stdin)) {
        return 1;
    }

    int curStart = 0, curLen = 0;
    int bestStart = 0, bestLen = 0;

    for (int i = 0; ; i++) {
        char ch = s[i];
        if (ch == ' ' || ch == '\n' || ch == '\0') {
            if (curLen > bestLen) {
                bestLen = curLen;
                bestStart = curStart;
            }
            curLen = 0;
            curStart = i + 1;
            if (ch == '\0') break;
        } else {
            curLen++;
        }
    }

    if (bestLen > 0) {
        printf("Longest word: ");
        for (int i = 0; i < bestLen; i++) {
            putchar(s[bestStart + i]);
        }
        printf(" (length %d)\n", bestLen);
    } else {
        printf("No word found\n");
    }

    return 0;
}