#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int arr[n];
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
        totalSum += arr[i];
    }

    long long leftSum = 0;
    int pivot = -1;
    for (int i = 0; i < n; i++) {
        long long rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            pivot = i;
            break;
        }
        leftSum += arr[i];
    }

    printf("%d\n", pivot);
    return 0;
}