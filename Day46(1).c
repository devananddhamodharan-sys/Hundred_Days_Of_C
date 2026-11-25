#include <stdio.h>

static int isVowel(char ch) {
    char lower = (ch >= 'A' && ch <= 'Z') ? (char)(ch + ('a' - 'A')) : ch;
    return (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
}

int main(void) {
    char s[1005], out[1005];
    if (!fgets(s, sizeof(s), stdin)) {
        return 1;
    }

    int idx = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') break;
        if (!isVowel(s[i])) {
            out[idx++] = s[i];
        }
    }
    out[idx] = '\0';

    printf("%s\n", out);
    return 0;
}