#include <stdio.h>

int main(void)
{
	FILE *file = fopen("info.txt", "r");
	char line[256];

	if (file == NULL)
	{
		perror("Unable to open info.txt");
		return 1;
	}

	while (fgets(line, sizeof(line), file) != NULL)
	{
		printf("%s", line);
	}

	fclose(file);
	return 0;
}
