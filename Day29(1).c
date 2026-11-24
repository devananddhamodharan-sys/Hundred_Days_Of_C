#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int val;
        if (scanf("%d", &val) != 1) {
            return 1;
        }
        sum += val;
    }

    printf("Sum = %lld\n", sum);
    return 0;
}