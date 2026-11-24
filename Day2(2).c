#include <stdio.h>

#define PI 3.14159265359

int main() {
    float radius, area, circumference;

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the results
    printf("\n--- Results ---\n");
    printf("Area          = %.2f sq units\n", area);
    printf("Circumference = %.2f units\n", circumference);

    return 0;
}