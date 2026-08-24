/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>
int main(){
    int a, b;
    char symbol;
    printf("Enter two numbers and a symbol (+, -, *, /, %%): ");
    scanf("%d %d %c", &a, &b, &symbol);
    if(symbol == '+'){
        printf("%d\n", a + b);
    }
    else if(symbol == '-'){
        printf("%d\n", a - b);
    }
    else if(symbol == '*'){
        printf("%d\n", a*b);
    }
    else if(symbol == '/'){
            printf("%d\n", a/b);
    }
    else{
        printf("%d\n", a%b);
    }


}



