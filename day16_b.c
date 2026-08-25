/*Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/
#include <stdio.h>
int main(){
	int n, z=0, temp;
	printf("Enter a number: ");
	scanf("%d", &n);
    temp = n;
	while(n>0){
	z = z*10 + n%10;
	n = n/10;
	}
	if(z == temp){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }

	return 0;
}