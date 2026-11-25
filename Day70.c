#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1005];
    if (!fgets(s, sizeof(s), stdin)) {
        return 1;
    }

    int seenFirstAlpha = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (isalpha(ch)) {
            if (!seenFirstAlpha) {
                s[i] = (char)toupper(ch);
                seenFirstAlpha = 1;
            } else {
                s[i] = (char)tolower(ch);
            }
        }
    }

    printf("%s", s);
    return 0;
}