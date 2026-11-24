#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0.0) {
        printf("Invalid quadratic equation (a cannot be 0)\n");
        return 1;
    }

    double d = b * b - 4.0 * a * c;

    if (d > 0.0) {
        double r1 = (-b + sqrt(d)) / (2.0 * a);
        double r2 = (-b - sqrt(d)) / (2.0 * a);
        printf("Real and Distinct Roots: %.2f and %.2f\n", r1, r2);
    } else if (d == 0.0) {
        double r = -b / (2.0 * a);
        printf("Real and Equal Roots: %.2f and %.2f\n", r, r);
    } else {
        double realPart = -b / (2.0 * a);
        double imagPart = sqrt(-d) / (2.0 * a);
        printf("Complex Roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}