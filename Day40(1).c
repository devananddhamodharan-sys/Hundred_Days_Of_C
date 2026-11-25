#include <stdio.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int mat[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &mat[i][j]) != 1) {
                return 1;
            }
        }
    }

    for (int d = 0; d < rows + cols - 1; d++) {
        for (int i = 0; i < rows; i++) {
            int j = d - i;
            if (j >= 0 && j < cols) {
                printf("%d ", mat[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}