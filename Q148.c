
/*
Q148: Take two structs as input and check if they are identical.

Sample Test Cases:

Input 1:
Student1: Asha 101 90
Student2: Asha 101 90

Output 1:
Same
*/

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int rollNumber;
    float marks;
};

int main()
{
    struct Student student1, student2;

    // Input first student's details
    printf("Enter details of Student 1:\n");

    printf("Enter student name: ");
    scanf(" %99[^\n]", student1.name);

    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    // Input second student's details
    printf("\nEnter details of Student 2:\n");

    printf("Enter student name: ");
    scanf(" %99[^\n]", student2.name);

    printf("Enter roll number: ");
    scanf("%d", &student2.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student2.marks);

    // Compare the structures member by member
    if (strcmp(student1.name, student2.name) == 0 &&
        student1.rollNumber == student2.rollNumber &&
        student1.marks == student2.marks)
    {
        printf("\nSame\n");
    }
    else
    {
        printf("\nNot Same\n");
    }

    return 0;
}
