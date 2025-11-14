#include <stdio.h>

int main() {
    int num, left, right;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Left Shift
    left = num << 1;   // multiply by 2
    // Right Shift
    right = num >> 1;  // divide by 2

    printf("\nOriginal number: %d", num);
    printf("\nAfter left shift (num << 1): %d", left);
    printf("\nAfter right shift (num >> 1): %d\n", right);

    return 0;
}
