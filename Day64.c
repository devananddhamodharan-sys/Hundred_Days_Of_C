#include <stdio.h>
#include <string.h>

int main(void) {
    char s[2005];
    if (!fgets(s, sizeof(s), stdin)) return 1;

    int len = 0;
    while (s[len] != '\0') {
        if (s[len] == '\n') {
            s[len] = '\0';
            break;
        }
        len++;
    }

    int lastPos[256];
    for (int i = 0; i < 256; i++) {
        lastPos[i] = -1;
    }

    int left = 0, bestLen = 0;
    for (int right = 0; right < len; right++) {
        unsigned char ch = (unsigned char)s[right];
        if (lastPos[ch] >= left) {
            left = lastPos[ch] + 1;
        }
        lastPos[ch] = right;
        int curLen = right - left + 1;
        if (curLen > bestLen) {
            bestLen = curLen;
        }
    }

    printf("%d\n", bestLen);
    return 0;
}