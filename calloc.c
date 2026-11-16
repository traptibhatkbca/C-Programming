#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int *ptr, n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory using calloc()
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed!");
        getch();
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The entered elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);   // Free allocated memory

    getch();
    return 0;
}
