#include <ctype.h>
#include <stdio.h>

int main(void)
{
	FILE *file = fopen("text.txt", "r");
	int ch;
	int vowels = 0;
	int consonants = 0;

	if (file == NULL) {
		perror("text.txt");
		return 1;
	}

	while ((ch = fgetc(file)) != EOF) {
		if (isalpha((unsigned char)ch)) {
			int letter = tolower((unsigned char)ch);
			if (letter == 'a' || letter == 'e' || letter == 'i' ||
				letter == 'o' || letter == 'u') {
				vowels++;
			} else {
				consonants++;
			}
		}
	}

	fclose(file);
	printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
	return 0;
}
