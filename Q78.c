
/*
Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:

Input 1:
3 3
1 2 3
4 5 6
7 8 9

Output 1:
15
*/

#include <stdio.h>

int main()
{
    int rows, cols;
    int sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols || rows <= 0)
    {
        printf("Please enter valid dimensions for a square matrix.");
        return 1;
    }

    int matrix[rows][cols];

    // Input matrix elements
    printf("Enter the matrix elements:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for (int i = 0; i < rows; i++)
    {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
