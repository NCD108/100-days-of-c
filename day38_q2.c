/*Q76: Check if a matrix is symmetric.
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False*/
#include <stdio.h>
int main(){
    int side, flag = 0, i, j;
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
        for(j = 0; j < side; j++){
            if(matrix[i][j] != matrix[j][i]){
                flag = 1;
                break;
            }
            if(flag == 1){
                break;
            }
        }
    }

    if(flag == 0)
        printf("Symmetric!\n");
    else
        printf("Not symmetric.\n");

    return 0;
}