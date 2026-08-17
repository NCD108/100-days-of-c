/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>
int main(){
    char ip;
    printf("Enter a character: ");
    scanf("%c", &ip);
    if(ip>='A' && ip<='Z'){
        printf("The character is an uppercase letter\n");
    }
    else if(ip>='a' && ip<='z'){
        printf("The character is a lowercase letter\n");
    }
    else if(ip>='0' && ip<='9'){
        printf("The character is a digit\n");
    }
    else{
        printf("The character is a special character\n");
    }
    return 0;
}