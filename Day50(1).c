#include <stdio.h>

int main(void) {
    int dd, mm, yyyy;
    if (scanf("%d/%d/%d", &dd, &mm, &yyyy) != 3) {
        return 1;
    }

    const char *months[13] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (mm < 1 || mm > 12) {
        printf("Invalid month\n");
        return 1;
    }

    printf("%02d-%s-%04d\n", dd, months[mm], yyyy);
    return 0;
}