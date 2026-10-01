 #include <stdio.h>

int main(void)
{
	char str[1000];

	if (fgets(str, sizeof(str), stdin) == NULL)
		return 0;

	for (int i = 0; str[i] != '\0'; i++) {
		char ch = str[i];
		if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
			ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' &&
			ch != '\n') {
			putchar(ch);
		}
	}

	return 0;
}
