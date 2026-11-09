/*Q78: Find the sum of main diagonal elements for a square matrix.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15*/
#include <stdio.h>
int main(){
    int side, sum = 0, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &side);
    int matrix[side][side];
    printf("Enter the elements of the matrix: \n");
    for(i = 0; i < side; i++){
        for(j = 0; j < side; j++){
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < side; i++){
       sum += matrix[i][i];
    }
    printf("The sum of all diagonal elements of the given square matrix is = %d\n", sum);
    return 0;
}