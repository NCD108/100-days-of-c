
/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:

Input 1:
3 3
1 2 3
4 5 6
7 8 9

Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0)
    {
        printf("Invalid matrix dimensions.");
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

    printf("Diagonal traversal:\n");

    // Traverse diagonals
    for (int diagonal = 0; diagonal < rows + cols - 1; diagonal++)
    {
        int row, col;

        // Determine starting position of each diagonal
        if (diagonal < cols)
        {
            row = 0;
            col = diagonal;
        }
        else
        {
            row = diagonal - cols + 1;
            col = cols - 1;
        }

        // Print elements along the diagonal
        while (row < rows && col >= 0)
        {
            printf("%d ", matrix[row][col]);

            row++;
            col--;
        }
    }

    printf("\n");

    return 0;
}
