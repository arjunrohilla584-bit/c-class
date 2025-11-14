#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int isEven(int n) {
    return (n % 2 == 0);
}

void Classify(int n, int (*primePtr)(int), int (*evenPtr)(int)) {
    if (primePtr(n))
        printf("%d is Prime\n", n);
    else
        printf("%d is Not Prime\n", n);

    if (evenPtr(n))
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    Classify(num, isPrime, isEven);

    return 0;
}
