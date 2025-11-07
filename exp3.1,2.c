#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 15)
        printf("Category: Starvation\n");
    else if (bmi <= 17.5)
        printf("Category: Anorexic\n");
    else if (bmi <= 18.5)
        printf("Category: Underweight\n");
    else if (bmi <= 24.9)
        printf("Category: Ideal\n");
    else if (bmi <= 29.9)
        printf("Category: Overweight\n");
    else if (bmi <= 39.9)
        printf("Category: Obese\n");
    else
        printf("Category: Morbidly Obese\n");

    return 0;
}
