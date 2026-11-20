
/*
Q149: Use malloc() to allocate structure memory dynamically
and print details.

Sample Test Cases:

Input 1:
Student allocated dynamically with details: Tina 105 88

Output 1:
Name: Tina | Roll: 105 | Marks: 88
*/

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    // Dynamically allocate memory for a Student structure
    struct Student *student;

    student = malloc(sizeof(struct Student));

    // Check whether memory allocation was successful
    if (student == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input student details
    printf("Enter student name: ");
    scanf(" %99[^\n]", student->name);

    printf("Enter roll number: ");
    scanf("%d", &student->roll);

    printf("Enter marks: ");
    scanf("%d", &student->marks);

    // Display student details
    printf("\nName: %s | Roll: %d | Marks: %d\n",
           student->name, student->roll, student->marks);

    // Release dynamically allocated memory
    free(student);

    student = NULL;

    return 0;
}
