#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // Input length and breadth from the user
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display the results
    printf("\n--- Results ---\n");
    printf("Area      = %.2f sq units\n", area);
    printf("Perimeter = %.2f units\n", perimeter);

    return 0;
}