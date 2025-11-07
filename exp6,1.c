#include <stdio.h>

long fact_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

long fact_nonrecursive(int n) {
    long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

long binomial_recursive(int n, int r) {
    return fact_recursive(n) / (fact_recursive(r) * fact_recursive(n - r));
}

long binomial_nonrecursive(int n, int r) {
    return fact_nonrecursive(n) / (fact_nonrecursive(r) * fact_nonrecursive(n - r));
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d%d", &n, &r);

    if (r > n) {
        printf("Invalid input! r cannot be greater than n.\n");
        return 0;
    }

    printf("\nUsing Recursive Function:\n");
    printf("C(%d, %d) = %ld\n", n, r, binomial_recursive(n, r));

    printf("\nUsing Non-Recursive Function:\n");
    printf("C(%d, %d) = %ld\n", n, r, binomial_nonrecursive(n, r));

    printf("\nTable of Binomial Coefficients (Recursive):\n");
    printf(" n\\r |");
    for (int i = 0; i <= n; i++) printf(" %3d", i);
    printf("\n-----------------------------------------\n");

    for (int i = 0; i <= n; i++) {
        printf(" %3d |", i);
        for (int j = 0; j <= i; j++) {
            printf(" %3ld", binomial_recursive(i, j));
        }
        printf("\n");
    }

    return 0;
}
