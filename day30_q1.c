/*Q59: Count even and odd numbers in an array.
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0
*/
#include <stdio.h>
int main(){
    int ip, i, odd = 0, even = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &ip);
    int a[ip];

    for(i = 0; i < ip; i++){
        printf("Enter element number %d of the array: ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < ip; i++){
        if(a[i]%2 == 0)
            even++;
        else{
            odd++;
        }

    }
    printf("Even elements = %d, Odd elements = %d\n", even, odd);
    return 0;
}