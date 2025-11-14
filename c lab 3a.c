#include <stdio.h>

void printBits(int n) {
    for (int i = 7; i >= 0; i--)
        printf("%d", (n >> i) & 1);
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nBinary of %d: ", a);
    printBits(a);

    printf("\nBinary of %d: ", b);
    printBits(b);

    printf("\n\nBitwise AND (a & b) = %d\n", a & b);
    printBits(a & b);

    printf("\n\nBitwise OR (a | b) = %d\n", a | b);
    printBits(a | b);

    printf("\n\nBitwise XOR (a ^ b) = %d\n", a ^ b);
    printBits(a ^ b);

    return 0;
}
