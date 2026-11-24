#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Need at least 2 elements\n");
        return 1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        int val;
        if (scanf("%d", &val) != 1) {
            return 1;
        }
        if (val > largest) {
            secondLargest = largest;
            largest = val;
        } else if (val > secondLargest && val < largest) {
            secondLargest = val;
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No distinct second largest element\n");
    } else {
        printf("Second Largest = %d\n", secondLargest);
    }

    return 0;
}