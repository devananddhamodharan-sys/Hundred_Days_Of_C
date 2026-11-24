#include <stdio.h>

int main(void) {
    double cp, sp;
    if (scanf("%lf %lf", &cp, &sp) != 2 || cp <= 0.0) {
        printf("Invalid Cost Price\n");
        return 1;
    }

    if (sp > cp) {
        double profitPercent = ((sp - cp) / cp) * 100.0;
        printf("Profit = %.2f%%\n", profitPercent);
    } else if (cp > sp) {
        double lossPercent = ((cp - sp) / cp) * 100.0;
        printf("Loss = %.2f%%\n", lossPercent);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}