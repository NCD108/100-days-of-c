/*Q34: Write a program to check if a number is prime.
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime*/
#include <stdio.h>
int main(){
	int ip, i=1, z=0;
	printf("Enter a number: ");
	scanf("%d", &ip);
	if(ip<2)
		printf("Invalid input. ");
	else{
		while(i<=ip/2){
			if(ip%i==0)
			z+=1;
		i++;
		}
	}
	if(z==1)
		printf("Prime.\n");
	else
		printf("Not prime.\n");
	
	return 0;
}