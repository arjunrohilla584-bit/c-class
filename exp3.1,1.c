#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is valid.\n");

        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        }
        else if (fabs(a*a + b*b - c*c) < 0.0001 ||
                 fabs(a*a + c*c - b*b) < 0.0001 ||
                 fabs(b*b + c*c - a*a) < 0.0001) {
            printf("It is a Right-angled triangle.\n");
        }
        else {
            printf("It is a Scalene triangle.\n");
        }
    } 
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
