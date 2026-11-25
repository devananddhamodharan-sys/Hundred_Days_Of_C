#include <stdio.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int mat[rows][cols];
    long long rowSum[rows];

    for (int i = 0; i < rows; i++) {
        long long sum = 0;
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &mat[i][j]) != 1) {
                return 1;
            }
            sum += mat[i][j];
        }
        rowSum[i] = sum;
    }

    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %lld\n", i, rowSum[i]);
    }

    return 0;
}