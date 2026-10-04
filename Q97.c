 #include <stdio.h>
#include <ctype.h>

int main(void)
{
	char name[200];
	int start_of_word = 1;

	if (fgets(name, sizeof(name), stdin) == NULL)
		return 0;

	for (int i = 0; name[i] != '\0'; i++) {
		if (isspace((unsigned char)name[i])) {
			start_of_word = 1;
		} else if (start_of_word) {
			printf("%c.", name[i]);
			start_of_word = 0;
		}
	}

	return 0;
}
