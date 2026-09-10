/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>
int main(){
    int ip;
    printf("Enter a year: ");
    scanf("%d", &ip);
    if(ip%4 == 0 && (ip%400 == 0 || ip%100 != 0)){
        printf("The year is a leap year\n");
    }
    else{
        printf("The year is not a leap year\n");
    }
    return 0;
}