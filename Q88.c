/* Q88: Replace spaces with hyphens in a string. */
#include <stdio.h>

int main(void)
{
	char str[1000];

	if (fgets(str, sizeof(str), stdin) == NULL) {
		return 0;
	}

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			str[i] = '-';
		}
	}

	printf("%s", str);
	return 0;
}
