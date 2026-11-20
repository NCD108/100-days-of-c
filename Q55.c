/*Q55: Write a program to print all the prime numbers from 1 to n.
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19
*/

#include <stdio.h>
int main(){
	int n, i, j, flag;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n < 2)
		printf("Invalid input.");
	else{
		printf("All Prime numbers between 1 and %d are: ", n);
		for(j = 2; j <= n; j++){
			for(i = 1; i <= j; i++){
				if(j%i==0 && j != i && i != 1){
					flag = 1;
                    break;
                }
			}
            if(flag == 0)
				    printf("%d ", j);
            flag = 0;
			
		}
        printf("\n");
	}	

	return 0;
}