#include <stdio.h>
#include <math.h>

int main() {
    float population, rate;
    int i;

    printf("Enter current population: ");
    scanf("%f", &population);

    printf("Enter annual growth rate (in percentage): ");
    scanf("%f", &rate);

    printf("\nPopulation at the end of each year for the last 10 years:\n");

    for (i = 10; i >= 1; i--) {
        float past_population = population / pow(1 + rate / 100, i);
        printf("Year -%d : %.2f\n", i, past_population);
    }

    return 0;
}
