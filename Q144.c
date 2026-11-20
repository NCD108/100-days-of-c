#include <stdio.h>
#include <string.h>

typedef struct {
	char name[50];
	int roll;
	int marks;
} Student;

void printStudent(Student student) {
	printf("Name: %s | Roll: %d | Marks: %d\n",
		   student.name, student.roll, student.marks);
}

int main(void) {
	Student student;
	char firstToken[50];

	if (scanf("%49s", firstToken) != 1) {
		return 0;
	}

	if (strcmp(firstToken, "Student:") == 0) {
		if (scanf("%49s %d %d", student.name, &student.roll,
				  &student.marks) != 3) {
			return 0;
		}
	} else {
		strcpy(student.name, firstToken);
		if (scanf("%d %d", &student.roll, &student.marks) != 2) {
			return 0;
		}
	}

	printStudent(student);
	return 0;
}
