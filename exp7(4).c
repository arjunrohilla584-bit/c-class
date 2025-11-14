#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char homeAddress[100];
    char hostelAddress[100];
    char city[30];
    char state[30];
    char zip[10];
};

int main() {
    union Address addr;

    printf("Enter your name: ");
    gets(addr.name);
    printf("Name: %s\n", addr.name);

    printf("\nEnter your present address: ");
    gets(addr.homeAddress);
    printf("Present Address: %s\n", addr.homeAddress);

    printf("\nEnter your city: ");
    gets(addr.city);
    printf("City: %s\n", addr.city);

    printf("\nEnter your state: ");
    gets(addr.state);
    printf("State: %s\n", addr.state);

    printf("\nEnter ZIP code: ");
    gets(addr.zip);
    printf("ZIP: %s\n", addr.zip);

    return 0;
}
