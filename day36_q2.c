/*Q72: Find the sum of all elements in a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21*/
#include <stdio.h>
int main(){
    int row, col, i, j, sum = 0;
    printf("Enter row and column size: ");
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    printf("Enter the elements of the matrix: \n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            sum += matrix[i][j];
        }
    }

    printf("The sum of all the elements of this matrix is: %d\n", sum);

    return 0;
}