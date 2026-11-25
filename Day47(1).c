#include <stdio.h>

static int cleanLine(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        if (s[len] == '\n') {
            s[len] = '\0';
            break;
        }
        len++;
    }
    return len;
}

int main(void) {
    char s1[1005], s2[1005];
    if (!fgets(s1, sizeof(s1), stdin) || !fgets(s2, sizeof(s2), stdin)) {
        return 1;
    }

    int len1 = cleanLine(s1);
    int len2 = cleanLine(s2);

    if (len1 != len2) {
        printf("Not Anagrams\n");
        return 0;
    }

    int freq[256] = {0};
    for (int i = 0; i < len1; i++) {
        freq[(unsigned char)s1[i]]++;
        freq[(unsigned char)s2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}