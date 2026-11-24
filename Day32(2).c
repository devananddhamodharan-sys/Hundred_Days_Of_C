#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        n = -n;
    }

    int freq[10] = {0};
    if (n == 0) {
        freq[0] = 1;
    } else {
        while (n > 0) {
            int digit = (int)(n % 10);
            freq[digit]++;
            n /= 10;
        }
    }

    int bestDigit = 0;
    for (int d = 1; d < 10; d++) {
        if (freq[d] > freq[bestDigit]) {
            bestDigit = d;
        }
    }

    printf("Most frequent digit = %d (occurs %d times)\n", bestDigit, freq[bestDigit]);
    return 0;
}