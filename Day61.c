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

    int negIdx[n];
    int front = 0, back = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negIdx[++back] = i;
        }
        while (front <= back && negIdx[front] < i - k + 1) {
            front++;
        }
        if (i >= k - 1) {
            if (front <= back) {
                printf("%d ", arr[negIdx[front]]);
            } else {
                printf("0 ");
            }
        }
    }
    printf("\n");

    return 0;
}