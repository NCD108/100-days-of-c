/*Q39: Write a program to find the product of odd digits of a number.
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)*/

#include <stdio.h>
int main(){
	int ip, temp, i, j=1, flag=0;
	printf("Enter a number: ");
	scanf("%d", &ip);
    temp = ip;
	while(ip>0){
	    i = ip%10;
	    ip /= 10;
	    if(i%2!=0){
		    j *= i;
            flag++;
        }
	}
	if(flag>0)
		printf("The product of all the odd digits of %d is: %d\n", temp, j);
	else
		printf("No odd digits. 1.\n");
	return 0;
}