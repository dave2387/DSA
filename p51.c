// WAP to calculate the sum of n numbers using Pointer

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, sum=0;
    
    printf("enter the value of n:");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    for ( int  i = 0; i < n; i++)
    {
        sum+= *(arr+i);
    }
    printf("%d",sum);

    free(arr);
}
