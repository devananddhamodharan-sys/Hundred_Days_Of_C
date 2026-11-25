#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    for (int i = 0; i < n; i++) {
        int pge = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge = arr[j];
                break;
            }
        }
        printf("%d", pge);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}