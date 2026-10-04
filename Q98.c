// Print the initials of all given names and the surname in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char name[256];
	char *start, *end, *word;

	if (fgets(name, sizeof(name), stdin) == NULL)
		return 0;

	name[strcspn(name, "\n")] = '\0';
	start = name;

	while (isspace((unsigned char)*start))
		start++;

	end = start + strlen(start);
	while (end > start && isspace((unsigned char)end[-1]))
		*--end = '\0';

	word = start;
	while (*word) {
		char *next = word;

		while (*next && !isspace((unsigned char)*next))
			next++;

		if (*next) {
			printf("%c.", *word);
			while (isspace((unsigned char)*next))
				next++;
		} else {
			if (word != start)
				putchar(' ');
			printf("%s", word);
			break;
		}

		word = next;
	}

	putchar('\n');
	return 0;
}
