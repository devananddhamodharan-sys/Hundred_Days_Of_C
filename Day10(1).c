#include <stdio.h>

int main(void) {
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Invalid Triangle\n");
    } else if (a == b && b == c) {
        printf("Equilateral Triangle\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene Triangle\n");
    }

    return 0;
}