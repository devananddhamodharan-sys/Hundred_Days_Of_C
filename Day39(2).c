#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    long long diagSum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val;
            if (scanf("%d", &val) != 1) {
                return 1;
            }
            if (i == j) {
                diagSum += val;
            }
        }
    }

    printf("Main Diagonal Sum = %lld\n", diagSum);
    return 0;
}