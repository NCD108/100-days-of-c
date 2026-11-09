/*Q63: Merge two arrays.
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/
#include <stdio.h>
int main(){
    int ip1, ip2, ip3, i, j, k;
    printf("Enter the size of the first array: ");
    scanf("%d", &ip1);
    printf("Enter the size of the second array: ");
    scanf("%d", &ip2);
    ip3 = ip1 + ip2;
    int a[ip1], b[ip2], c[ip3];
    for(i = 0; i < ip1; i++){
        printf("Enter element number %d of the first array: ", i);
        scanf("%d", &a[i]);
    }
    for(i = 0; i < ip2; i++){
        printf("Enter element number %d of the second array: ", i);
        scanf("%d", &b[i]);
    }
    for(j = 0; j < ip1; j++){
        c[j] = a[j];
    }
    for(k = ip1, j = 0; k < ip3; j++, k++){
        c[k] = b[j];
    }
    printf("Merged array: {");
    for(i = 0; i < ip3; i++){
        printf("%d", c[i]);
        if(i + 1 < ip3)
            printf(", ");
    }
    printf("}\n");
    return 0;
}