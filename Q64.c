/*Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7*/

#include <stdio.h>
int main(){
    int ip, len = 0, temp, i, max;
    printf("Enter a number: ");
    scanf("%d", &ip);
    temp = ip;
    while(temp>0){
        len+=1;
        temp/=10;
    }
    int a[len];
    int count[10] = {0}; 
    for(i = 0; i < len; i++){
        a[i] = ip%10;
        ip/=10;
    }
    for(i = 0; i < len; i++){
        count[a[i]]++;
    }

    for(i = 0; i < ip; i++){
        if(max <= count[i])
            max = count[i];
    }
    printf("The digit that appears the most in the given integer is %d", a[max]);
    /*for(i = 0; i < len; i++){
        printf("%d", a[i]);
        if(i < len - 1)
            printf(", ");
    }*/
    printf("\n");

    return 0;
}