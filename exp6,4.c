#include <stdio.h>
#include <math.h>

int PRIME(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    int limit = (int)sqrt((double)n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int low, high;
    printf("Enter lower and upper bound: ");
    if (scanf("%d%d", &low, &high) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    if (low > high) {
        int tmp = low;
        low = high;
        high = tmp;
    }

    printf("Prime numbers between %d and %d:\n", low, high);
    int first_printed = 0;
    for (int n = low; n <= high; n++) {
        if (PRIME(n)) {
            if (first_printed) printf(" ");
            printf("%d", n);
            first_printed = 1;
        }
    }
    if (!first_printed) printf("None");
    printf("\n");
    return 0;
}
