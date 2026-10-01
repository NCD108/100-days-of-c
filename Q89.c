/* Q89: Count the frequency of a given character in a string. */
#include <stdio.h>

int main(void)
{
	char string[1000];
	char character;
	int frequency = 0;

	scanf("%999s", string);
	scanf(" %c", &character);

	for (int i = 0; string[i] != '\0'; i++) {
		if (string[i] == character) {
			frequency++;
		}
	}

	printf("%d\n", frequency);
	return 0;
}
