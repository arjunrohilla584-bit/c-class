
#include <stdio.h>

int num = 10;

void display();
void modify();

int main() {
    printf("Inside main(), num = %d\n", num);
    display();
    modify();
    display();
    return 0;
}

void display() {
    printf("Inside display(), num = %d\n", num);
}

void modify() {
    num = 25;
    printf("Inside modify(), num is changed to %d\n", num);
}
