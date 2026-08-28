/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20
Input 2:
7 3
Output 2:
21
*/
#include <stdio.h>
int main(){
	int ip1, ip2, ips, i, lcm;
	printf("Enter the two numbers: ");
	scanf("%d %d", &ip1, &ip2);
	if(ip1>ip2)
		ips = ip1;
	else if(ip2>=ip1)
		ips = ip2;
	for(ips; ips<=ip1*ip2; ips++){
		if(ips%ip1 == 0 && ips%ip2 == 0){
			lcm = ips;
			break;
		}
	}
    printf("The LCM of %d and %d is %d\n", ip1, ip2, lcm);
    return 0;
}