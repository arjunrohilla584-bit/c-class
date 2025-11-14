#include <stdio.h>

int main() {
    char name[50];
    float basic, da, gross;

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter basic pay: ");
    scanf("%f", &basic);

    da = 0.10 * basic;  
    gross = basic + da;

    printf("\nEmployee Name: %s\n", name);
    printf("Gross Salary: %.2f\n", gross);

    return 0;
}
