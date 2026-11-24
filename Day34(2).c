#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    int target;
    if (scanf("%d", &target) != 1) {
        return 1;
    }

    int idx = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        printf("Element not found\n");
        return 0;
    }

    for (int i = idx; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}