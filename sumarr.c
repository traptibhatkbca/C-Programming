
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Please enter a size between 1 and 100.\n");
        return 1;
    }

    int arr[100];

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
