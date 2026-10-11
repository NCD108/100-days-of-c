/*
 * Find the next greater element for every array element using a brute-force
 * nested-loop approach.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	if (scanf("%d", &n) != 1 || n < 0) {
		return 1;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
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
		int next_greater = -1;

		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[i]) {
				next_greater = arr[j];
				break;
			}
		}

		if (i > 0) {
			printf(", ");
		}
		printf("%d", next_greater);
	}

	free(arr);
	return 0;
}
