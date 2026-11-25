#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main(void) {
    const char *monthNames[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    const int daysInMonth[] = {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    for (int m = JANUARY; m <= DECEMBER; m++) {
        if (m == FEBRUARY) {
            printf("%s: 28 or 29 days\n", monthNames[m]);
        } else {
            printf("%s: %d days\n", monthNames[m], daysInMonth[m]);
        }
    }

    return 0;
}