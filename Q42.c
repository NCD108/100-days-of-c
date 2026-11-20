/*Q42: Write a program to check if a number is a perfect number.
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number*/
#include <stdio.h>
int main(){
	int ip, i=1, store=0;
	printf("Enter a number: ");
	scanf("%d", &ip);
	while(i<ip){
		if(ip%i==0){
		store+=i;
		}
        i++;
	}
	if(ip==store)
		printf("%d is a perfect number!\n", ip);
	else
		printf("%d is not a perfect number.\n", ip);
	return 0;
}