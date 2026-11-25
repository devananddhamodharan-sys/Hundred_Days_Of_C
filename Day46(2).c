#include <stdio.h>

int main(void) {
    char s[1005];
    if (!fgets(s, sizeof(s), stdin)) {
        return 1;
    }

    int seen[26] = {0};
    char found = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') break;
        if (s[i] >= 'a' && s[i] <= 'z') {
            int pos = s[i] - 'a';
            if (seen[pos]) {
                found = s[i];
                break;
            }
            seen[pos] = 1;
        }
    }

    if (found != '\0') {
        printf("First repeating lowercase = %c\n", found);
    } else {
        printf("No repeating lowercase alphabet\n");
    }

    return 0;
}