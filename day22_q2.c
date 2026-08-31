/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4*/

#include <stdio.h>
int main(){
	float ip, i = 3, sum = 1;
    int n = 1;
	printf("Enter a number: ");
	scanf("%f", &ip);
	if(ip==1)
		printf("%.2f", ip);
	else if(ip > 1){
		while(n <= ip-1){
			sum += (i)/(i + 1);
            printf("%d. Sum after %dst loop = %.2f\n", n, n, sum);
			i+=2;
			n++;
		}
		printf("Approximate sum: %.2f\n", sum);
	}
	else{
		printf("Invalid input.\n");
	}
	return 0;
}