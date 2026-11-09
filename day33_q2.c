/*Q66: Insert an element in a sorted array at the appropriate position.
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6*/
#include <stdio.h>
int main(){
    int len, i, loc, el;
    printf("Enter the length of the array you'd like to create: ");
    scanf("%d", &len);
    int a[len + 1];
    printf("Enter the elements of the array: \n");
    for(i = 0; i < len; i++){
        printf("Enter the element to be stored at index %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the index where you'd like to enter the new element (in the range 0 to %d): ", len);
    scanf("%d", &loc);
    printf("Enter the element you'd like to add: ");
    scanf("%d", &el);
    
    for(i = len; i > loc; i--){
        a[i] = a[i-1];
    }
    a[loc] = el;

    printf("Updated array: \n");
    for(i = 0; i < len + 1; i++){
        printf("%d", a[i]);
        if(i < len)
            printf(", ");
    }
    printf("\n");
    return 0;
}