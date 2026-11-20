/* Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main(){
    float radius;
    printf("Enter the radius of the circle (in meters): ");
    scanf("%f", &radius);
    printf("The area of the circle is: %f\nThe circumference of the circle is: %f\n", 3.1415*radius*radius, 2*radius*3.1415);
    return 0;
}