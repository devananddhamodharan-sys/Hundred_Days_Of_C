#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        int val;
        if (scanf("%d", &val) != 1) {
            return 1;
        }
        if (val > 0) {
            pos++;
        } else if (val < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    printf("Positive = %d, Negative = %d, Zero = %d\n", pos, neg, zero);
    return 0;
}