#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Not a Strong Number\n");
        return 0;
    }

    int temp = n;
    long long sum = 0;

    while (temp > 0) {
        int d = temp % 10;
        long long fact = 1;
        for (int i = 2; i <= d; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if (sum == n) {
        printf("Strong Number\n");
    } else {
        printf("Not a Strong Number\n");
    }

    return 0;
}