/*Q62: Reverse an array without taking extra space.
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1
*/
#include <stdio.h>
int main(){
    int ip, i, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &ip);
    int a[ip];

    for(i = 0; i < ip; i++){
        printf("Enter element number %d of the array: ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < ip/2; i++){
        temp = a[i];
        a[i] = a[ip - i - 1];
        a[ip - i - 1] = temp;
    }

    printf("Reversed Array: {");

    for(i = 0; i < ip; i++){
        printf("%d", a[i]);
        if(i + 1 < ip)
            printf(", ");
    }

    printf("}\n");
    return 0;
}
