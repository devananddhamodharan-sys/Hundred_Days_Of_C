#include <stdio.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    long long sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val;
            if (scanf("%d", &val) != 1) {
                return 1;
            }
            sum += val;
        }
    }

    printf("Sum = %lld\n", sum);
    return 0;
}