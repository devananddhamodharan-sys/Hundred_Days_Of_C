#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    int x;
    if (scanf("%d", &x) != 1) {
        return 1;
    }

    int pos = n - 1;
    while (pos >= 0 && arr[pos] > x) {
        arr[pos + 1] = arr[pos];
        pos--;
    }
    arr[pos + 1] = x;

    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}