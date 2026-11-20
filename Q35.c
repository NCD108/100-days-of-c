/*Q35: Write a program to print all factors of a given number.

Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10
*/

#include <stdio.h>
int main(){
	int user_ip, i, store;
	printf("Enter a number: ");
	scanf("%d", &user_ip);
    printf("factors: ");
	for(i=1; i<=user_ip; i++){
		store = user_ip%i;
		if(store==0){
			printf("%d ", i);
		}
	}
    printf("\n");
	return 0;
}