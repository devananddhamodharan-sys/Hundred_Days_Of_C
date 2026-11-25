#include <stdio.h>
#include <string.h>

static void stripNewline(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }
}

int main(void) {
    char s[1005], t[1005];
    if (!fgets(s, sizeof(s), stdin) || !fgets(t, sizeof(t), stdin)) return 1;

    stripNewline(s);
    stripNewline(t);

    size_t n1 = strlen(s), n2 = strlen(t);
    if (n1 != n2) {
        printf("Not Anagram\n");
        return 0;
    }

    int count[26] = {0};
    for (size_t i = 0; i < n1; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}