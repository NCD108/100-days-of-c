/* Q126: Check whether a file exists and display its contents. */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[256];
	FILE *file;
	int character;

	printf("Filename: ");
	if (fgets(filename, sizeof(filename), stdin) == NULL) {
		return 1;
	}

	filename[strcspn(filename, "\n")] = '\0';
	file = fopen(filename, "r");

	if (file == NULL) {
		printf("Error: File does not exist!\n");
		return 1;
	}

	printf("File opened successfully.\n");
	while ((character = fgetc(file)) != EOF) {
		putchar(character);
	}

	fclose(file);
	return 0;
}
