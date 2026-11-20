/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345
*/
#include <stdio.h>
int main(){
	int ip, i = 1, j = 1;
	printf("Enter a number: ");  
    scanf("%d", &ip); // Enter 5 to get the above pattern. Enter whatever you want for fun.
	while(i <= ip){
		while(j <= i){
			printf("%d", j);
			j++;
		}
		printf("\n");
		j = 1;
		i++;
	}
	return 0;
}