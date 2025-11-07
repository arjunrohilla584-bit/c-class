#include <stdio.h>

int globalVar = 50;

void testFunction();

int main() {
    printf("Accessing globalVar inside main(): %d\n", globalVar);
    testFunction();
    return 0;
}

void testFunction() {
    int localVar = 10;
    printf("Accessing localVar inside testFunction(): %d\n", localVar);
    printf("Accessing globalVar inside testFunction(): %d\n", globalVar);
}
