#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex read();
void display(struct complex c);
struct complex add(struct complex c1, struct complex c2);
struct complex multiply(struct complex c1, struct complex c2);

int main() {
    struct complex c1, c2, sum, product;

    printf("Enter first complex number:\n");
    c1 = read();

    printf("Enter second complex number:\n");
    c2 = read();

    sum = add(c1, c2);
    product = multiply(c1, c2);

    printf("\nFirst complex number: ");
    display(c1);

    printf("Second complex number: ");
    display(c2);

    printf("\nSum = ");
    display(sum);

    printf("Product = ");
    display(product);

    return 0;
}

struct complex read() {
    struct complex temp;
    printf("  Real part: ");
    scanf("%f", &temp.real);
    printf("  Imaginary part: ");
    scanf("%f", &temp.imag);
    return temp;
}

void display(struct complex c) {
    if (c.imag >= 0)
        printf("%.1f + %.1fi\n", c.real, c.imag);
    else
        printf("%.1f - %.1fi\n", c.real, -c.imag);
}

struct complex add(struct complex c1, struct complex c2) {
    struct complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

struct complex multiply(struct complex c1, struct complex c2) {
    struct complex temp;
    temp.real = c1.real * c2.real - c1.imag * c2.imag;
    temp.imag = c1.real * c2.imag + c1.imag * c2.real;
    return temp;
}
