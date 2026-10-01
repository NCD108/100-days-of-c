/* Q86: Check if a string is a palindrome. */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[1000];
	int left, right;
	int palindrome = 1;

	if (fgets(str, sizeof(str), stdin) == NULL)
		return 0;

	str[strcspn(str, "\n")] = '\0';
	left = 0;
	right = (int)strlen(str) - 1;

	while (left < right) {
		if (str[left] != str[right]) {
			palindrome = 0;
			break;
		}
		left++;
		right--;
	}

	if (palindrome)
		printf("Palindrome\n");
	else
		printf("Not palindrome\n");

	return 0;
}
