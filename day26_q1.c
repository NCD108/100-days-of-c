/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>
int main(){
	int n = 5, i = 1, j = 1, k = 5, l = 4;
	while(i <= n){
		while(j <= l){
			printf(" ");
			j++;
		}
		while(k <= n){
			printf("%d", k);
			k++;
		}
		printf("\n");
		i++;
		l--;
		j = 1;
		k -= i;
	}

	return 0;
}