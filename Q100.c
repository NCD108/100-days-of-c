/* Q100: Print all substrings of a string. */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[1000];

	if (fgets(str, sizeof(str), stdin) == NULL)
		return 0;

	str[strcspn(str, "\n")] = '\0';

	int first = 1;
	for (int start = 0; str[start] != '\0'; start++) {
		for (int end = start; str[end] != '\0'; end++) {
			if (!first)
				printf(",");
			first = 0;
			for (int i = start; i <= end; i++)
				putchar(str[i]);
		}
	}

	putchar('\n');
	return 0;
}
