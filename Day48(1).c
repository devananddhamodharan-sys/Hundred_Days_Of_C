#include <stdio.h>
#include <string.h>

static void stripNewline(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }
}

int main(void) {
    char s1[1005], s2[1005];
    if (!fgets(s1, sizeof(s1), stdin) || !fgets(s2, sizeof(s2), stdin)) {
        return 1;
    }

    stripNewline(s1);
    stripNewline(s2);

    size_t n1 = strlen(s1), n2 = strlen(s2);
    if (n1 == 0 || n1 != n2) {
        printf("Not a Rotation\n");
        return 0;
    }

    char doubled[2015];
    strcpy(doubled, s1);
    strcat(doubled, s1);

    if (strstr(doubled, s2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not a Rotation\n");
    }

    return 0;
}