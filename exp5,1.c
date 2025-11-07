#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int first, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = -2147483648;

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if(second == -2147483648)
        printf("No second largest element exists.\n");
    else
        printf("The second largest number is: %d\n", second);

    return 0;
}
