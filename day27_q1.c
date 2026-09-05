/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>
int main(){
	int n = 9, i = 1, j, k,stars1 = 1, stars2 = 7;
	while(i <= n){
		if(i <= 5){
			for(j = 1; j <= stars1; j++){
				printf("*");
			}
			stars1 += 2;
		}
		else{
			for(k = 1; k <= stars2; k++){
				printf("*");
			}
			stars2 -= 2;
		}
		printf("\n");
		i++;
	}
	return 0;
}