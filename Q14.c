/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>
int main(){
    char ip;
    printf("Enter a character: ");
    scanf("%c", &ip);
    if(ip == 'a' || ip == 'A' || ip == 'e' || ip == 'E' || ip == 'i' || ip == 'I' || ip == 'o' || ip == 'O' || ip == 'u' || ip == 'U'){
        printf("The character is a vowel\n");
    }
    else{
        printf("The character is a consonant\n");
    }
    return 0;
}