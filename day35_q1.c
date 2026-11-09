/*Q69: Find the second largest element in an array.
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40*/
#include <stdio.h>
int main(){
    int len, i, max = 0, max2 = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int a[len];

    printf("Enter the elements of the array: \n");

    for(i = 0; i < len; i++){
        printf("Enter the element at index %d: ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < len; i++){
        if(max < a[i]){
            max = a[i];
        }
    }

    for(i = 0; i < len; i++){
        if(max2 < a[i] && a[i] < max){
            max2 = a[i];
        }
    }
    printf("max = %d\nmax2 = %d\n", max, max2);

    return 0;
}