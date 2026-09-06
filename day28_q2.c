/*Q56: Read and print elements of a one-dimensional array.
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5*/

#include <stdio.h>
int main(){
    int a, b, i;
    printf("Enter the desired length of the array you'd like to create: ");
    scanf("%d", &a);
    int numbers[a];
    printf("Enter the values of the array: ");
    for(i = 0; i < a; i++){
        scanf("%d", &numbers[i]);
    }
    printf("The array is: ");
    for(b = 0; b < a; b++){
        printf("%d", numbers[b]);
        if(b != a-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}