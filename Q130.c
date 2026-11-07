#include <stdio.h>

int main(void)
{
	FILE *file;
	int count, i;
	char name[50];
	int roll, marks;

	if (scanf("%d", &count) != 1 || count <= 0)
		return 1;

	file = fopen("students.txt", "w");
	if (file == NULL)
		return 1;

	for (i = 0; i < count; i++) {
		if (scanf("%49s %d %d", name, &roll, &marks) != 3) {
			fclose(file);
			return 1;
		}
		fprintf(file, "%s %d %d\n", name, roll, marks);
	}
	fclose(file);

	file = fopen("students.txt", "r");
	if (file == NULL)
		return 1;

	while (fscanf(file, "%49s %d %d", name, &roll, &marks) == 3)
		printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);

	fclose(file);
	return 0;
}
