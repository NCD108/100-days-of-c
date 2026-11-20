#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Date {
	int day;
	int month;
	int year;
};

struct Employee {
	char name[50];
	int id;
	struct Date joiningDate;
};

int main(void) {
	char input[200];
	struct Employee employee;

	if (fgets(input, sizeof(input), stdin) == NULL) {
		return 0;
	}

	if (sscanf(input, "Employee: %49[^|] | ID: %d | Joining Date: %d %d %d",
			   employee.name, &employee.id, &employee.joiningDate.day,
			   &employee.joiningDate.month, &employee.joiningDate.year) != 5) {
		return 0;
	}

	/* Remove whitespace around the employee name. */
	char *start = employee.name;
	while (isspace((unsigned char)*start)) {
		start++;
	}
	memmove(employee.name, start, strlen(start) + 1);
	size_t length = strlen(employee.name);
	while (length > 0 && isspace((unsigned char)employee.name[length - 1])) {
		employee.name[--length] = '\0';
	}

	printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
		   employee.name, employee.id, employee.joiningDate.day,
		   employee.joiningDate.month, employee.joiningDate.year);

	return 0;
}
