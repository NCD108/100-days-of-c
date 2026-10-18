 #include <stdio.h>

int main(void) {
	char s[1000];
	int last[256];
	int start = 0, longest = 0;

	if (scanf("%999s", s) != 1)
		return 0;

	for (int i = 0; i < 256; i++)
		last[i] = -1;

	for (int i = 0; s[i] != '\0'; i++) {
		unsigned char ch = (unsigned char)s[i];

		if (last[ch] >= start)
			start = last[ch] + 1;
		last[ch] = i;

		if (i - start + 1 > longest)
			longest = i - start + 1;
	}

	printf("%d\n", longest);
	return 0;
}
