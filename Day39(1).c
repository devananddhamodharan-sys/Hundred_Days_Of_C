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

    int diagLen = (rows < cols) ? rows : cols;
    int distinct = 1;

    for (int i = 0; i < diagLen; i++) {
        for (int j = i + 1; j < diagLen; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct) {
        printf("Distinct\n");
    } else {
        printf("Not Distinct\n");
    }

    return 0;
}