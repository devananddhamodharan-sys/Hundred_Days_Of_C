#include <stdio.h>

static int firstOccurrence(const int arr[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

static int lastOccurrence(const int arr[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int nums[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) return 1;
    }

    int target;
    if (scanf("%d", &target) != 1) return 1;

    int first = firstOccurrence(nums, n, target);
    int last = (first == -1) ? -1 : lastOccurrence(nums, n, target);

    printf("%d, %d\n", first, last);
    return 0;
}