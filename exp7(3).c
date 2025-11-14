#include <stdio.h>

struct book {
    int bookid;
    char title[50];
    char author[50];
    float price;
};



int main() {
    struct book b1;

    printf("Enter Book ID: ");
    scanf("%d", &b1.bookid);
    printf("Enter Book Title: ");
    scanf("%s", b1.title);
    printf("Enter Author Name: ");
    scanf("%s", b1.author);
    printf("Enter Price: ");
    scanf("%f", &b1.price);

    display(b1);

    return 0;
}

void display(struct book b) {
    printf("\nBook Details:\n");
    printf("Book ID: %d\n", b.bookid);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}
