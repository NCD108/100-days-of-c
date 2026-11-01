/* Q125: Append a new line of text to an existing file. */
#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *file = fopen("data.txt", "a");
	char text[1024];

	if (file == NULL)
	{
		perror("Unable to open data.txt");
		return 1;
	}

	printf("Enter text to append: ");
	if (fgets(text, sizeof(text), stdin) == NULL)
	{
		fclose(file);
		return 1;
	}

	text[strcspn(text, "\n")] = '\0';
	fprintf(file, "%s\n", text);
	fclose(file);

	printf("File updated successfully with appended text.\n");
	return 0;
}
