#include <ctype.h>
#include <stdio.h>
#include <string.h>

typedef struct {
	char name[100];
	int roll;
	int marks;
} Student;

/* Reads a word while ignoring punctuation such as commas and colons. */
static int read_word(char word[], size_t size) {
	int ch;
	size_t i = 0;

	do {
		ch = getchar();
	} while (ch != EOF && !isalnum((unsigned char)ch));

	if (ch == EOF) {
		return 0;
	}

	do {
		if (i + 1 < size) {
			word[i++] = (char)ch;
		}
		ch = getchar();
	} while (ch != EOF && isalnum((unsigned char)ch));

	word[i] = '\0';
	return 1;
}

static Student top_student(const Student students[], int count) {
	Student top = students[0];
	for (int i = 1; i < count; i++) {
		if (students[i].marks > top.marks) {
			top = students[i];
		}
	}
	return top;
}

int main(void) {
	int count;
	char word[100];

	if (scanf("%d", &count) != 1 || count <= 0 || !read_word(word, sizeof(word))) {
		return 0;
	}
	if (strcmp(word, "students") == 0 && !read_word(word, sizeof(word))) {
		return 0;
	}

	Student students[count];
	for (int i = 0; i < count; i++) {
		if (i > 0 && !read_word(word, sizeof(word))) {
			return 0;
		}
		strcpy(students[i].name, word);
		if (scanf("%d %d", &students[i].roll, &students[i].marks) != 2) {
			return 0;
		}
	}

	Student top = top_student(students, count);
	printf("Top Student: %s | Roll: %d | Marks: %d\n",
		   top.name, top.roll, top.marks);
	return 0;
}
