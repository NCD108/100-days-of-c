/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
#include <math.h>
int main(){
	int i, num, temp, z=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	temp = num;
	while(num/2!=0 && num > 1){
		z+=1;
		num=num/2;
	}
	while(z>=0){
	    i = (int)round(pow(2, z));
		printf("%d", temp/i);
		temp = temp%i;
		z = z-1;
	}
    printf("\n");
	return 0;
}

