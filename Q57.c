/*Q57: Find the sum of array elements.
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3
*/
#include <stdio.h>
int main(){
    int n, i, j, sum = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i ++){
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for(j = 0; j < n; j++){
            sum += a[j];
    }
    printf("The sum of all elements of the entered array is %d\n", sum);
    return 0;
}