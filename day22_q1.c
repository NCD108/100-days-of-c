/*Q43: Write a program to check if a number is a strong number.
Sample Test Cases:
Input 1:
145 = 1! + 4! + 5!
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number*/

#include <stdio.h>
int main(){

    //Taking user input and creating a copy
	int ip, temp, n, sum = 0, i, z;
	printf("Enter a number: ");
	scanf("%d", &ip);
	temp = ip;


	while(temp > 0){
	n = temp % 10;
	temp /= 10;
	for(i = 1, z = 1; i <= n; i++){
		z *= i;
		}
    sum += z;
	}

    //printf("factorial sum value = %d\n", sum);

	if(sum == ip)
		printf("%d is a strong number!\n", ip);
	else
		printf("%d is not a strong number.\n", ip);
	return 0;
}