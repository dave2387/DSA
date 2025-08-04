//  Read two matrices, first 3x2 and second 2x3, perform multiplication operation 
// and store result in third matrix and print it.

#include <stdio.h>

void main()
{
    int matrix1[3][2], matrix2[2][3], result[3][3];

    printf("Enter elements of first 3x2 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second 2x3 matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < 2; k++)
            {
                printf("i: %d\t", i);
                printf("j: %d\t", j);
                printf("k: %d\n", k);

                result[i][j] += matrix1[k][j] * matrix2[j][k];
            }
            
        }
    }

     for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
             printf("%d \t", result[i][j]);
        }
    }
}