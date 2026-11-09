/*Q68: Delete an element from an array.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5*/
#include <stdio.h>
int main(){
    int len, i, loc;
    printf("Enter the length of the array you'd like to create: ");
    scanf("%d", &len);
    int a[len];
    printf("Enter the elements of the array: \n");
    for(i = 0; i < len; i++){
        printf("Enter the element at index %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the index of the element you'd like to delete: ");
    scanf("%d", &loc);

    for(i = 0; i < len - loc - 1; i++){
        a[loc + i] = a[loc + i + 1];
    }
    len--;

    for(i = 0; i < len; i++){
        printf("%d", a[i]);
        if(i < len - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}