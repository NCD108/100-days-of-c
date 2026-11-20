/*Q73: Find the sum of each row of a matrix and store it in an array.
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15*/
#include <stdio.h>
int main(){
    int row, col, i, j, sum = 0;
    printf("Enter row and column size: ");
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    int a[row];
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
        a[i] = sum;
        sum = 0;
    }
    printf("{");
    for(i = 0; i < row; i++){
        printf("%d", a[i]);
        if(i < row - i)
            printf(", ");
    }

    printf("}\n");
    return 0;
}