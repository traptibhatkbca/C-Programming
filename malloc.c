#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int *ptr, n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

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

    printf("Elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    getch();
    return 0;
}
