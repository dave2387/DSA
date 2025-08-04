//  WAP to sort the array elements using Pointer.

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, temp, i, j;
    printf("Enter the value of n :");
    scanf("%dx", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    for (i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (*(arr + j) < *(arr + min_idx))
            {
                min_idx = j;
            }
        }
        temp = *(arr + i);
        *(arr + i) = *(arr + min_idx);
        *(arr + min_idx) = temp;
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
}