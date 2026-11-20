/*Q47: Write a program to print the following pattern:
*
**
***
****
*****
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****
*/
#include <stdio.h>
int main(){
	int ip, i = 1, j = 1;
	printf("Enter a number: ");  // Enter 5 to get the above pattern. Enter whatever you want for fun.
	scanf("%d", &ip);
	while(i <= ip){
		while(j <= i){
			printf("*");
			j++;
		}
		printf("\n");
		j = 1;
		i++;
	}
	return 0;
}

