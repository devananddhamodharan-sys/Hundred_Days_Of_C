#include <stdio.h>

int main(void) {
    int m, n;
    if (scanf("%d", &m) != 1 || m < 0) return 1;
    int a[m > 0 ? m : 1];
    for (int i = 0; i < m; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    if (scanf("%d", &n) != 1 || n < 0) return 1;
    int b[n > 0 ? n : 1];
    for (int j = 0; j < n; j++) {
        if (scanf("%d", &b[j]) != 1) return 1;
    }

    int total = m + n;
    int merged[total > 0 ? total : 1];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    for (int idx = 0; idx < total; idx++) {
        printf("%d ", merged[idx]);
    }
    printf("\n");

    return 0;
}