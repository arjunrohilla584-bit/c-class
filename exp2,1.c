#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("\nArea of Rectangle = %.2f", area);
    printf("\nPerimeter of Rectangle = %.2f\n", perimeter);

    return 0;
}
