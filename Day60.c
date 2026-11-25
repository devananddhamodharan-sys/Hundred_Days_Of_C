#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    int k;
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) return 1;

    int dequeIdx[n];
    int front = 0, back = -1;

    for (int i = 0; i < n; i++) {
        while (front <= back && dequeIdx[front] <= i - k) {
            front++;
        }
        while (front <= back && arr[dequeIdx[back]] <= arr[i]) {
            back--;
        }
        dequeIdx[++back] = i;

        if (i >= k - 1) {
            printf("%d ", arr[dequeIdx[front]]);
        }
    }
    printf("\n");

    return 0;
}