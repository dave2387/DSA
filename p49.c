//  WAP to allocate and de-allocate memory for int, char and float variable at
// runtime.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *iptr = (int *)malloc(sizeof(int));
    char *cptr = (char *)malloc(sizeof(char));
    float *fptr = (float *)malloc(sizeof(float));

    if (iptr && cptr && fptr)
    {
        *iptr = 10;
        *cptr = 'a';
        *fptr = 2.5;
    }
    else
    {
        printf("Memory not available");
    }

    printf("%d\n", *iptr);
    printf("%c\n", *cptr);
    printf("%f", *fptr);

    free(iptr);
    free(cptr);
    free(fptr);
}