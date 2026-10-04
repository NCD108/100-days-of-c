 #include <stdio.h>
#include <string.h>

int main(void)
{
	char first[1000], second[1000], combined[2000];

	if (scanf("%999s %999s", first, second) != 2)
		return 0;

	if (strlen(first) == strlen(second)) {
		strcpy(combined, first);
		strcat(combined, first);

		if (strstr(combined, second) != NULL) {
			printf("Rotation\n");
			return 0;
		}
	}

	printf("Not rotation\n");
	return 0;
}
