/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.
*/

#include <stdio.h>
int main(){
	int n = 5, i = 0, j = 5, k = 3, l = 1;
	while(i < n){
		if(2 * i + 1 <= n){
			while(j <= n){
				printf("*\n");
				j++;
			}
		}
		else if(n > 2 * i + 1 < 13){
			while(k <= n){
				printf("*\n");
				k++;
			}
			k -= 1;
		}
        while(l < n){
		printf("\n");
        l++;
        break;
        }
		i++;
		j -= i*3;
        if(j == 0)
            j = 1;
	}
	return 0;
}