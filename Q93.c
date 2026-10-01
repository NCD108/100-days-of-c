	 #include <stdio.h>
	 #include <string.h>

	int main(void) {
		char first[1000], second[1000];
		int count[256] = {0};

		if (fgets(first, sizeof(first), stdin) == NULL ||
			fgets(second, sizeof(second), stdin) == NULL) {
			return 1;
		}

		first[strcspn(first, "\n")] = '\0';
		second[strcspn(second, "\n")] = '\0';

		if (strlen(first) != strlen(second)) {
			printf("Not anagrams\n");
			return 0;
		}

		for (size_t i = 0; first[i] != '\0'; i++) {
			count[(unsigned char)first[i]]++;
			count[(unsigned char)second[i]]--;
		}

		for (int i = 0; i < 256; i++) {
			if (count[i] != 0) {
				printf("Not anagrams\n");
				return 0;
			}
		}

		printf("Anagrams\n");
		return 0;
	}
    