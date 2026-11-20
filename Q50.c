/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.*/

#include <stdio.h>
int main(){
	int n = 5, i = 1, j = 1, k = 5, l = 1, m = 1;
	while(i <= n){
		while(j <= k){
			printf("*");
			j++;	
		}
		printf("\n");
		while(l <= m){
			printf(" ");
			l++;
		}
		l = 1;
		m++;
		k--;
		j = 1;
		i++;
	}
	return 0;
}