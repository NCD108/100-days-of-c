/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main(){
    float length, breadth;
    printf("Enter the length of the rectangle (in meters): ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle (in meters): ");
    scanf("%f", &breadth);
    printf("The area of the rectangle is: %.2f square meters\nThe perimeter of the rectangle is: %.2f meters\n", length*breadth, 2*(length+breadth));
    return 0;
}