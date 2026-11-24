#include <stdio.h>

int main(void) {
    int a, b;
    char op;
    if (scanf("%d %c %d", &a, &op, &b) != 3) {
        return 1;
    }

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%.2f\n", (double)a / b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("%d\n", a % b);
            } else {
                printf("Error: Modulo by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}