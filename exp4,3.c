#include <stdio.h>

void counter();

int main() {
    counter();
    counter();
    counter();
    return 0;
}

void counter() {
    static int count = 0;
    count++;
    printf("Function called %d times\n", count);
}
