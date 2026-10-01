#include <stdio.h>

int main(void)
{
	char str[1000];
	int seen[26] = {0};

	if (scanf("%999s", str) != 1)
		return 0;

	for (int i = 0; str[i] != '\0'; i++) {
		int index = str[i] - 'a';

		if (seen[index]) {
			printf("%c", str[i]);
			return 0;
		}

		seen[index] = 1;
	}

	return 0;
}
