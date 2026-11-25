#include <stdio.h>

int main(void) {
    char s[1005];
    if (!fgets(s, sizeof(s), stdin)) {
        return 1;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = (char)(s[i] + ('a' - 'A'));
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (char)(s[i] - ('a' - 'A'));
        }
    }

    printf("%s", s);
    return 0;
}