#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(void) {
    int st;
    if (scanf("%d", &st) != 1) {
        return 1;
    }

    switch ((enum Status)st) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed due to an error.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status code.\n");
            break;
    }

    return 0;
}