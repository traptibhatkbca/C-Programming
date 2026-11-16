#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int *ptr, n, new_n, i;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL)
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

    printf("Enter new size: ");
    scanf("%d", &new_n);

    ptr = (int *)realloc(ptr, new_n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory reallocation failed!");
        getch();
        return 1;
    }

    if
