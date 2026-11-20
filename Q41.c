/*Q41: Write a program to swap the first and last digit of a number.
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001*/
#include <stdio.h>
#include <math.h>
int main(){
	
	//Taking user input and creating variables (printf("1. Value of ip = %d\n", ip);)
	int ip, op, temp, dgt = 0, dgt2, lds, tds, mds;
	printf("Enter a number: ");
	scanf("%d", &ip);
	
    //Digits counter (printf("2. Value of dgt = %d\n", dgt);)
	temp = ip;
	while(temp > 0){
	temp /= 10;
	dgt++;
	}

	//Storing the leading digit (printf("3. Value of lds = %d\n", lds);)
	dgt2 = dgt - 1;
	lds = ip/round(pow(10, dgt2));

	//Storing the trailing digit (printf("4. Value of tds = %d\n", tds);)
	tds = ip%10;
	
    //Storing the middle digits (printf("5. Value of mds = %d\n", mds);)
	mds = ip%(int)round(pow(10, dgt2));

	//Putting it all together
	op = (tds * (int)round(pow(10, dgt2))) + ((mds - tds) + lds);

	//Printing the output
	printf("Number after the operation: %d\n", op);

	return 0;
}