#include <stdio.h>

int main(void) {
    char s[1005];
    if (!fgets(s, sizeof(s), stdin)) {
        return 1;
    }

    int len = 0;
    while (s[len] != '\0') {
        if (s[len] == '\n') {
            s[len] = '\0';
            break;
        }
        len++;
    }

    int left = 0, right = len - 1, isPal = 1;
    while (left < right) {
        if (s[left] != s[right]) {
            isPal = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPal) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }

    return 0;
}