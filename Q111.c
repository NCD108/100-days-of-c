/* Q111: First negative integer in every subarray of size k. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, k;

	if (scanf("%d", &n) != 1 || n <= 0)
		return 0;

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (arr == NULL)
		return 1;

	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
		free(arr);
		return 0;
	}

	for (int start = 0; start <= n - k; ++start) {
		int first_negative = 0;

		for (int i = start; i < start + k; ++i) {
			if (arr[i] < 0) {
				first_negative = arr[i];
				break;
			}
		}

		if (start > 0)
			printf(" ");
		printf("%d", first_negative);
	}
	printf("\n");

	free(arr);
	return 0;
}
