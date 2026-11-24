#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        n = -n;
    }

    long long product = 1;
    int hasOdd = 0;

    while (n > 0) {
        int digit = (int)(n % 10);
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits = %lld\n", product);
    } else {
        printf("No odd digits found (Product = 0)\n");
    }

    return 0;
}