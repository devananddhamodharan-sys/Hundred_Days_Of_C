#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time;
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        return 1;
    }

    double si = (principal * rate * time) / 100.0;
    double amount = principal * pow((1.0 + rate / 100.0), time);
    double ci = amount - principal;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);
    return 0;
}