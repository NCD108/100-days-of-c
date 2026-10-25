 #include <stdio.h>

int main(void)
{
	FILE *file;
	char name[100];
	int age;

	printf("Name: ");
	fgets(name, sizeof(name), stdin);

	printf("Age: ");
	scanf("%d", &age);

	file = fopen("info.txt", "w");
	if (file == NULL)
	{
		printf("Unable to create the file.\n");
		return 1;
	}

	fprintf(file, "Name: %sAge: %d\n", name, age);
	fclose(file);

	printf("File created successfully! Data written to info.txt\n");
	return 0;
}
