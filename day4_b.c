/*Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
int main(){
    int a, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        sum += i;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}