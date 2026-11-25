#include <stdio.h>

enum Choice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main(void) {
    int ch;
    double a, b;

    if (scanf("%d %lf %lf", &ch, &a, &b) != 3) {
        return 1;
    }

    switch ((enum Choice)ch) {
        case ADD:
            printf("Result = %.2f\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %.2f\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %.2f\n", a * b);
            break;
        default:
            printf("Invalid menu choice (1=ADD, 2=SUBTRACT, 3=MULTIPLY)\n");
            break;
    }

    return 0;
}