#include <stdio.h>

static void reverseRange(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

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

    int k;
    if (scanf("%d", &k) != 1) {
        return 1;
    }

    k = ((k % n) + n) % n;
    if (k > 0) {
        reverseRange(arr, 0, n - 1);
        reverseRange(arr, 0, k - 1);
        reverseRange(arr, k, n - 1);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}