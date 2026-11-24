#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Factorial is undefined for negative numbers\n");
        return 1;
    }

    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= (unsigned long long)i;
    }

    printf("Factorial = %llu\n", fact);
    return 0;
}