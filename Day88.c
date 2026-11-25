#include <stdio.h>

enum Priority {
    LOW,
    MEDIUM,
    HIGH,
    CRITICAL,
    PRIORITY_COUNT
};

int main(void) {
    const char *priorityNames[] = {
        "LOW", "MEDIUM", "HIGH", "CRITICAL"
    };

    for (int p = LOW; p < PRIORITY_COUNT; p++) {
        printf("%s -> %d\n", priorityNames[p], p);
    }

    return 0;
}