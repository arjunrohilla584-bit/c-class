#include <stdio.h>

int power(int *a, int *b) {
    int result = 1;
    for(int i = 0; i < *b; i++) {
        result *= *a;
    }
    return result;
}

int main() {
    int a, b;

    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter exponent (b): ");
    scanf("%d", &b);

    int result = power(&a, &b);

    printf("%d^%d = %d\n", a, b, result);

    return 0;
}
