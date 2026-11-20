/*Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1
*/
#include <stdio.h>
int main(){
	int ip1, ip2, ips, i, gcd;
	printf("Enter the two numbers: ");
	scanf("%d %d", &ip1, &ip2);
	if(ip1<ip2)
		ips = ip1;
	else if(ip2<=ip1)
		ips = ip2;
	for(i=1; i<=ips; i++){
		if(ip1%i == 0 && ip2%i == 0){
			gcd = i;
		}
	}
	printf("Greatest Common Denominator = %d\n", gcd);
	return 0;
}