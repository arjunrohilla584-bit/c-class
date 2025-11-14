#include <stdio.h>

struct complex {
    float real;
    float imag;
};

void display(struct complex c);

int main() {
    struct complex c1;
    printf("Enter real part: ");
    scanf("%f", &c1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c1.imag);

    printf("The complex number is: ");
    display(c1);

    return 0;
}

void display(struct complex c) {
    if (c.imag >= 0)
        printf("%.1f + %.1fi\n", c.real, c.imag);
    else
        printf("%.1f - %.1fi\n", c.real, -c.imag);
}
