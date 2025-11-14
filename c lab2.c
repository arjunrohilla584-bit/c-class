#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*fp)(int, int);
    fp = add;

    int result = fp(5, 7);
    printf("Result = %d\n", result);

    return 0;
}
