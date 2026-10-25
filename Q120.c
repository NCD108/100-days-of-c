/* Q120: Convert each word in a string to sentence case. */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[1000];
	int start_of_word = 1;

	if (fgets(str, sizeof str, stdin) == NULL)
		return 1;

	str[strcspn(str, "\n")] = '\0';

	for (size_t i = 0; str[i] != '\0'; ++i) {
		unsigned char ch = (unsigned char)str[i];

		if (isalpha(ch)) {
			str[i] = (char)(start_of_word ? toupper(ch) : tolower(ch));
			start_of_word = 0;
		} else if (isspace(ch)) {
			start_of_word = 1;
		}
	}

	puts(str);
	return 0;
}
