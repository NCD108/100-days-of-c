/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.
*/
#include <stdio.h> 
int main(){
	int n = 7, i = 1, j, k, spaces = 3, stars = 1;
	while(i <= n){
		
		//spaces

		for(j = 1; j <= spaces; j++){
			printf(" ");
		}

		//stars

		for(k = 1; k <= stars; k++){
			printf("*");
		}

		i++;
		if(i <= 4)
			spaces -= 1;
		else
			spaces += 1;
		if(i <= 4)
			stars += 2;
		else
			stars -= 2;
		printf("\n");
		
	}
	return 0;
}