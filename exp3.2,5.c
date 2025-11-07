#include <stdio.h>

int main() {
    int a, b, c, d;
    int limit;

    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    printf("\nRamanujan Numbers up to %d are:\n", limit);

    for (a = 1; a * a * a < limit; a++) {
        for (b = a + 1; b * b * b < limit; b++) {
            for (c = a + 1; c * c * c < limit; c++) {
                for (d = c + 1; d * d * d < limit; d++) {
                    int sum1 = a * a * a + b * b * b;
                    int sum2 = c * c * c + d * d * d;
                    if (sum1 == sum2 && sum1 <= limit)
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, a, b, c, d);
                }
            }
        }
    }

    return 0;
}
