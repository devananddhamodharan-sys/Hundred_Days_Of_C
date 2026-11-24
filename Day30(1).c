#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; i++) {
        int val;
        if (scanf("%d", &val) != 1) {
            return 1;
        }
        if (val % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even = %d, Odd = %d\n", evenCount, oddCount);
    return 0;
}