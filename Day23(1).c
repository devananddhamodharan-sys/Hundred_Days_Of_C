#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)(2 * i) / (4 * i - 1);
    }

    printf("Sum = %.4f\n", sum);
    return 0;
}