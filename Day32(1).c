#include <stdio.h>

int main(void) {
    int n1, n2;
    if (scanf("%d", &n1) != 1 || n1 < 0) {
        return 1;
    }
    int a[n1 > 0 ? n1 : 1];
    for (int i = 0; i < n1; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    if (scanf("%d", &n2) != 1 || n2 < 0) {
        return 1;
    }
    int b[n2 > 0 ? n2 : 1];
    for (int i = 0; i < n2; i++) {
        if (scanf("%d", &b[i]) != 1) return 1;
    }

    int total = n1 + n2;
    int merged[total > 0 ? total : 1];
    for (int i = 0; i < n1; i++) {
        merged[i] = a[i];
    }
    for (int j = 0; j < n2; j++) {
        merged[n1 + j] = b[j];
    }

    for (int i = 0; i < total; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}