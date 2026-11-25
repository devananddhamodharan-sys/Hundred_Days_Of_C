#include <stdio.h>

enum Level {
    LEVEL_ONE = 10,
    LEVEL_TWO,
    LEVEL_THREE,
    LEVEL_FOUR,
    LEVEL_FIVE
};

int main(void) {
    const char *labels[] = {
        "LEVEL_ONE", "LEVEL_TWO", "LEVEL_THREE", "LEVEL_FOUR", "LEVEL_FIVE"
    };
    enum Level vals[] = {
        LEVEL_ONE, LEVEL_TWO, LEVEL_THREE, LEVEL_FOUR, LEVEL_FIVE
    };

    for (int i = 0; i < 5; i++) {
        printf("%s = %d\n", labels[i], vals[i]);
    }

    return 0;
}