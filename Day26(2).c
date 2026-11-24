#include <stdio.h>

int main(void) {
    int counts[] = {1, 3, 5, 3, 1};
    int blocks = 5;

    for (int b = 0; b < blocks; b++) {
        for (int i = 0; i < counts[b]; i++) {
            printf("*\n");
        }
        if (b < blocks - 1) {
            printf("\n");
        }
    }
    return 0;
}