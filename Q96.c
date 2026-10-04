/* Q96: Reverse each word in a sentence without changing word order. */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[1000];

	if (fgets(sentence, sizeof(sentence), stdin) == NULL)
		return 0;

	size_t length = strlen(sentence);
	size_t start = 0;

	while (start < length) {
		while (start < length && isspace((unsigned char)sentence[start]))
			start++;

		size_t end = start;
		while (end < length && !isspace((unsigned char)sentence[end]))
			end++;

		for (size_t left = start, right = end - 1; left < right;
			 left++, right--) {
			char temporary = sentence[left];
			sentence[left] = sentence[right];
			sentence[right] = temporary;
		}

		start = end;
	}

	fputs(sentence, stdout);
	return 0;
}
