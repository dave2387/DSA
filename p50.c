// //  WAP to get and print the array elements using Pointer.

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    
    printf("enter the value of n:");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", *(arr + i));
    }

    free(arr);
}
