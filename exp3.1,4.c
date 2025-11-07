#include <stdio.h>

int main() {
    int year, day = 1, total_days = 0, leap;

    printf("Enter year: ");
    scanf("%d", &year);

    for (int i = 1900; i < year; i++) {
        leap = (i % 400 == 0) || (i % 4 == 0 && i % 100 != 0);
        total_days += leap ? 366 : 365;
    }

    day = (total_days % 7);

    printf("1st January %d is ", year);

    switch (day) {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }

    return 0;
}
