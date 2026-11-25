#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 1) return 1;

    int arr[n];
    int maxVal = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    int seen[maxVal + 1];
    for (int i = 0; i <= maxVal; i++) {
        seen[i] = 0;
    }

    int repeated = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && seen[arr[i]]) {
            repeated = arr[i];
            break;
        }
        if (arr[i] >= 0) {
            seen[arr[i]] = 1;
        }
    }

    printf("%d\n", repeated);
    return 0;
}