/*Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000*/
#include <stdio.h>
#include <math.h>
int main(){
	int ip, i, dgt=0, temp, dgt2;
	printf("Enter a binary number: ");
	scanf("%d", &ip);
    temp = ip;
	while(temp>0){
		temp/=10;
		dgt+=1;
    }
	printf("1's complement = ");
    dgt2=dgt-1;
    if(ip==0)
        printf("%d", 1);
	else if(ip/(round(pow(10, dgt2)))==0){
		printf("%d", 1);
    	}
	while(dgt>0){
		i = ip/(round(pow(10, dgt2)));
		ip= ip%((int)round(pow(10, dgt2)));
        dgt2--;
		dgt--;
		if(i==0)
			printf("1");
		else if(i==1)
			printf("0");
	}
	printf("\n");
	return 0;
}