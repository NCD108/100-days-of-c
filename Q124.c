 #include <stdio.h>

int main(void)
{
	char source_name[256], destination_name[256];
	FILE *source, *destination;
	int ch;

	printf("Enter source filename: ");
	if (scanf("%255s", source_name) != 1)
		return 1;

	printf("Enter destination filename: ");
	if (scanf("%255s", destination_name) != 1)
		return 1;

	source = fopen(source_name, "r");
	if (source == NULL) {
		perror("Unable to open source file");
		return 1;
	}

	destination = fopen(destination_name, "w");
	if (destination == NULL) {
		perror("Unable to open destination file");
		fclose(source);
		return 1;
	}

	while ((ch = fgetc(source)) != EOF)
		fputc(ch, destination);

	fclose(source);
	fclose(destination);
	printf("File copied successfully to %s\n", destination_name);

	return 0;
}
