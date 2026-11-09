/*Q77: Check if the elements on the diagonal of a matrix are distinct.
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True*/
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
        for(j = 0; j < side; i++){
            if(matrix[i][i] == matrix[j][j]){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0)
        printf("All elements are distinct!\n");
    else
        printf("All elements are not distinct.\n");
    return 0;
}