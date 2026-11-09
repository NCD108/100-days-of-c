/*Q61: Search for an element in an array using linear search.
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
*/
#include <stdio.h>
int main(){
    int ip, i, ip2, flag = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &ip);
    int a[ip];

    for(i = 0; i < ip; i++){
        printf("Enter element number %d of the array: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element whose index you'd like to find: ");
    scanf("%d", &ip2);

    for(i = 0; i < ip; i++){
        if(a[i] == ip2){
            printf("Earliest instance found at index %d.\n", i);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("The element you are searching for does not exist in the entered array.\n");

    return 0;
}