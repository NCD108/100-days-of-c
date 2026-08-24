/*Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main(){
	int n, z=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(n>0){
	z = z*10 + n%10;
	n = n/10;
	}
	printf("%d\n", z);

	return 0;
}