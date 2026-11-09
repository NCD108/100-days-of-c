/*Q58: Find the maximum and minimum element in an array.
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10
*/
#include <stdio.h>
int main(){
    int ip, i, max = 0, min = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &ip);
    int a[ip];

    for(i = 0; i < ip; i++){
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < ip; i++){
        if(max <= a[i])
            max = a[i];
    }

    min = a[0];

    for(i = 0; i + 1 < ip; i++){
        if(min >= a[i+1])
            min = a[i+1];
    }
    
    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}