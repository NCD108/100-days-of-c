/*Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27*/
#include <stdio.h>
int main(){
	int ip, sum=0, temp;
	printf("Enter a number: ");
	scanf("%d", &ip);
    temp = ip;
	while(ip>0){
		sum += ip%10;
		ip/=10;
	}
	printf("The sum of the digits of %d is %d\n", temp, sum);
	return 0;
}