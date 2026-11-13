#include <stdio.h>

#define STUDENT_COUNT 5

struct Student {
	char name[100];
	int roll;
	float marks;
};

int main(void) {
	struct Student students[STUDENT_COUNT];

	for (int i = 0; i < STUDENT_COUNT; i++) {
		scanf(" %99[^,\n]", students[i].name);
		scanf(" %d %f", &students[i].roll, &students[i].marks);
	}

	printf("\n%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
	for (int i = 0; i < STUDENT_COUNT; i++) {
		printf("%-20s %-10d %-10.2f\n",
			   students[i].name, students[i].roll, students[i].marks);
	}

	return 0;
}
