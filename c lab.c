#include <stdio.h>

void modifyValues(int *x, int *y) {
    *x = *x + 10;
    *y = *y * 2;
}

int main() {
    int a = 5, b = 7;

    printf("Before: a = %d, b = %d\n", a, b);

    modifyValues(&a, &b);

    printf("After: a = %d, b = %d\n", a, b);

    return 0;
}
