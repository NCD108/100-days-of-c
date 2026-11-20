/*Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/
#include <stdio.h>
#include <math.h>

int main(){
	int user_ip, user_ip_temp1, user_ip_temp2, check_armstrong=0, digits=0, digits2;
	printf("Enter a number: ");
	scanf("%d", &user_ip);
	user_ip_temp1 = user_ip;
	user_ip_temp2 = user_ip;
	while(user_ip>0){
	user_ip=user_ip/10;
	digits+=1;
	}
    digits2 = digits-1;
	while(user_ip_temp1>0){
		check_armstrong += (int)round(pow((user_ip_temp1/(int)round(pow(10,digits2))), digits));
		user_ip_temp1%=(int)round(pow(10,digits2));
        digits2-=1;
	}
	if(check_armstrong == user_ip_temp2)
		printf("Armstrong Number!\n");
	else
		printf("Not an Armstrong number.\n");

	return 0;
}
