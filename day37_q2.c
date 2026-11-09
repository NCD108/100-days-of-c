/*Q74: Find the transpose of a matrix.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6*/
#include <stdio.h>
int main(){
    int row, col, i, j;
    printf("Enter row and column size: ");
    scanf("%d %d", &row, &col);
    int matrix1[row][col], matrix2[col][row];
    printf("Enter the elements of the matrix: \n");
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            matrix2[j][i] = matrix1[i][j];
        }
    }

    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}