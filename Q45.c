/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22*/

#include <stdio.h>
int main(){
	float ip, i = 1, j, k, l, sum = 0;
	printf("Enter a number: ");
	scanf("%f", &ip);
	while(i <= ip){
		j = 2*i; 
        k = 3+(i-1)*4;
		l = j/k;
		sum += l;
        //printf("j = %.0f, k = %.0f, l = %.2f\n", j, k, l);
        //printf("Sum after loop number %.0f = %.2f\n", i, sum);
		i++;
	}
	printf("The sum until %.0f terms is = %.2f\n", ip, sum);
	return 0;
}