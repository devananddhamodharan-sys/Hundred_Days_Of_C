#include <stdio.h>

int main(void) {
    char s[1005];
    if (!fgets(s, sizeof(s), stdin)) {
        return 1;
    }

    char target;
    if (scanf(" %c", &target) != 1) {
        return 1;
    }

    int freq = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') break;
        if (s[i] == target) {
            freq++;
        }
    }

    printf("Frequency of '%c' = %d\n", target, freq);
    return 0;
}