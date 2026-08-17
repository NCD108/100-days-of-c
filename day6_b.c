/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>
int main(){
    int ip;
    printf("Enter a number: ");
    scanf("%d", &ip);
    if(ip > 0){
        printf("The number is positive\n");
    }
    else if(ip < 0){
        printf("The number is negative\n");
    }
    else{
        printf("The number is zero\n");
    }
    return 0;
}