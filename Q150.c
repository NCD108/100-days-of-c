
/*
Q150: Use pointer to struct to modify and display data
using -> operator.

Sample Test Cases:

Input 1:
Student pointer modifying values: John 106 91

Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
*/

#include <stdio.h>

struct Student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    struct Student student;
    struct Student *ptr;

    // Point to the structure variable
    ptr = &student;

    // Input student details using the structure pointer
    printf("Enter student name: ");
    scanf(" %99[^\n]", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%d", &ptr->marks);

    // Modify student details using the arrow operator
    printf("\nEnter updated student name: ");
    scanf(" %99[^\n]", ptr->name);

    printf("Enter updated roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter updated marks: ");
    scanf("%d", &ptr->marks);

    // Display modified student details
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
