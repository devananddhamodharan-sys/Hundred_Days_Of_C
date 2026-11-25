#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main(void) {
    int code;
    if (scanf("%d", &code) != 1) {
        return 1;
    }

    switch ((enum TrafficLight)code) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid signal value (0=RED, 1=YELLOW, 2=GREEN)\n");
            break;
    }

    return 0;
}