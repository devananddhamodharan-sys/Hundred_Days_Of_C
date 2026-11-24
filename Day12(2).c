#include <stdio.h>

int main(void) {
    int units;
    if (scanf("%d", &units) != 1 || units < 0) {
        return 1;
    }

    double bill = 0.0;

    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 200) {
        bill = (100 * 5.0) + ((units - 100) * 7.0);
    } else if (units <= 300) {
        bill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    } else {
        bill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
    }

    printf("Electricity Bill = ₹%.2f\n", bill);
    return 0;
}