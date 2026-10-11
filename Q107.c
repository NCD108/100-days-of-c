/* Q107: Previous greater element using a brute-force approach. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	if (scanf("%d", &n) != 1 || n < 0) {
		return 1;
	}

	int *arr = n > 0 ? malloc((size_t)n * sizeof(*arr)) : NULL;
	if (n > 0 && arr == NULL) {
		return 1;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			return 1;
		}
	}

	for (int i = 0; i < n; i++) {
		int previousGreater = -1;

		/* Search from right to left to find the nearest greater element. */
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] > arr[i]) {
				previousGreater = arr[j];
				break;
			}
		}

		if (i > 0) {
			printf(", ");
		}
		printf("%d", previousGreater);
	}
	printf("\n");

	free(arr);
	return 0;
}
