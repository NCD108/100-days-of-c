/*Q49: Write a program to print the following pattern:
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
	int n = 5, i = 1, j = 5;
	while(i <= n){
		while(j <= n){
			printf("%d", j);
			j++;
		}
        	j -= i+1;
		i += 1;
		printf("\n");
	}
	return 0;
}