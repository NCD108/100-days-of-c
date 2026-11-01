#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	FILE *file;
	int character;
	long characters = 0, words = 0, lines = 0;
	int in_word = 0;

	if (argc != 2) {
		printf("Usage: %s <filename>\n", argv[0]);
		return 1;
	}

	file = fopen(argv[1], "r");
	if (file == NULL) {
		perror("Unable to open file");
		return 1;
	}

	while ((character = fgetc(file)) != EOF) {
		characters++;

		if (character == '\n') {
			lines++;
		}

		if (isspace((unsigned char)character)) {
			in_word = 0;
		} else if (!in_word) {
			words++;
			in_word = 1;
		}
	}

	fclose(file);

	printf("Characters: %ld\n", characters);
	printf("Words: %ld\n", words);
	printf("Lines: %ld\n", lines);

	return 0;
}
