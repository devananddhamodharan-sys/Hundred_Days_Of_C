#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int num = 2; num <= n; num++) {
        int isPrime = 1;
        for (int d = 2; d * d <= num; d++) {
            if (num % d == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}