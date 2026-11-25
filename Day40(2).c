#include <stdio.h>

int main(void) {
    int r1, c1, r2, c2;
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0) {
        return 1;
    }

    int a[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            if (scanf("%d", &a[i][j]) != 1) return 1;
        }
    }

    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0) {
        return 1;
    }

    int b[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            if (scanf("%d", &b[i][j]) != 1) return 1;
        }
    }

    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    long long prod[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            long long sum = 0;
            for (int k = 0; k < c1; k++) {
                sum += (long long)a[i][k] * b[k][j];
            }
            prod[i][j] = sum;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%lld ", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}