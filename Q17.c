/*Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c;
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);
    if(a == 0){
        printf("This is not a quadratic equation. :(\n");
    }
    else if(b*b - 4*a*c < 0){
        printf("This quadratic has no real roots. The roots are complex.\n");
    }
    else if(b*b - 4*a*c >=0){
        float root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
        float root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
        if(root1 == root2){
            printf("The roots are real and same: %.2f\n", root1);
        }
        else{
            printf("The roots are real and different: %.2f, %.2f\n", root1, root2);
        }
    }
    return 0;
}