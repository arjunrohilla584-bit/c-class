#include <stdio.h>

int main() {
    int a = 10;

    printf("Outside block: a = %d\n", a);

    {
        int b = 20;
        printf("Inside block: a = %d, b = %d\n", a, b);
    }

    printf("Outside block again: a = %d\n", a);

    return 0;
}
