/*Q70: Rotate an array to the right by k positions.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3*/
#include <stdio.h>
int main(){
    int len, i, rot, temp, temp2, fix = 0; 
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int a[len];

    printf("Enter the elements of the array: \n");
//INCOMPLETE
    for(i = 0; i < len; i++){
        printf("Enter the element at index %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the number of times you'd like for the array to rotate: ");
    scanf("%d", &rot);

    for(i = 0; i < len; i++){
        if(i + rot > len){
            fix = i + rot - len - 1;
            temp = a[fix];
            a[fix] = a[i];
        }
        temp = a[i + rot];
        a[i + rot] = a[i];
        temp2 = a[i + rot + rot];
        a[i + rot + rot] = temp;
        
    }

    return 0;
}