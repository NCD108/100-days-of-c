
/*
Q80: Multiply two matrices.

Sample Test Cases:

Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12

Output 1:
58 64
139 154
*/

#include <stdio.h>

int main()
{
    int rows1, cols1, rows2, cols2;

    // Input dimensions of first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    int matrix1[rows1][cols1];

    // Input first matrix
    printf("Enter the elements of the first matrix:\n");

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input dimensions of second matrix
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check multiplication compatibility
    if (cols1 != rows2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int matrix2[rows2][cols2];
    int result[rows1][cols2];

    // Input second matrix
    printf("Enter the elements of the second matrix:\n");

    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize result matrix with zeros
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Multiply the two matrices
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the resulting matrix
    printf("Result of matrix multiplication:\n");

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
