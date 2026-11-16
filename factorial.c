
#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num > 20) {
        printf("Please enter a number between 0 and 20.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
