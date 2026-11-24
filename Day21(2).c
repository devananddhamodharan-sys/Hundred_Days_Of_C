#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Not a Perfect Number\n");
        return 0;
    }

    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    if (sum == n) {
        printf("Perfect Number\n");
    } else {
        printf("Not a Perfect Number\n");
    }

    return 0;
}