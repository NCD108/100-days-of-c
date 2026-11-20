
/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:

Input 1:
Employee details entered and stored in file.

Output 1:
Displays employee data read from file.
*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[100];
    float salary;
};

int main()
{
    struct Employee employee, retrievedEmployee;
    FILE *file;

    // Input employee ID
    printf("Enter employee ID: ");
    scanf("%d", &employee.id);

    // Input employee salary
    printf("Enter employee salary: ");
    scanf("%f", &employee.salary);

    // Clear remaining characters from input buffer
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        // Discard remaining input
    }

    // Input employee name
    printf("Enter employee name: ");
    fgets(employee.name, sizeof(employee.name), stdin);

    // Remove trailing newline from name
    employee.name[strcspn(employee.name, "\n")] = '\0';

    // Open binary file in write mode
    file = fopen("employee.dat", "wb");

    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write employee data into binary file
    if (fwrite(&employee, sizeof(struct Employee), 1, file) != 1)
    {
        printf("Error writing employee data.\n");
        fclose(file);
        return 1;
    }

    fclose(file);

    printf("\nEmployee data successfully stored in binary file.\n");

    // Open binary file in read mode
    file = fopen("employee.dat", "rb");

    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read employee data from binary file
    if (fread(&retrievedEmployee, sizeof(struct Employee), 1, file) != 1)
    {
        printf("Error reading employee data.\n");
        fclose(file);
        return 1;
    }

    fclose(file);

    // Display retrieved employee data
    printf("\n--- Employee Details Retrieved from File ---\n");

    printf("Employee ID: %d\n", retrievedEmployee.id);
    printf("Employee Name: %s\n", retrievedEmployee.name);
    printf("Employee Salary: %.2f\n", retrievedEmployee.salary);

    return 0;
}
