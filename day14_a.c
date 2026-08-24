/*Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main(){
	int n, i, z = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		z += (2*i + 1);
	}
	printf("The sum of the first %d odd numbers is %d\n", n, z);

	return 0;
}