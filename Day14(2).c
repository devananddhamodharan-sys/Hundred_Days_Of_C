#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 2) {
        printf("Product = 0 (no even numbers in range)\n");
        return 0;
    }

    unsigned long long product = 1;
    for (int i = 2; i <= n; i += 2) {
        product *= (unsigned long long)i;
    }

    printf("Product = %llu\n", product);
    return 0;
}