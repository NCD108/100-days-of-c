/* Q113: Find the kth smallest element in an integer array. */
#include <stdio.h>
#include <stdlib.h>

static int compare_ints(const void *a, const void *b)
{
	int x = *(const int *)a;
	int y = *(const int *)b;

	return (x > y) - (x < y);
}

int main(void)
{
	int n, k;

	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (arr == NULL) {
		return 0;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			return 0;
		}
	}

	if (scanf("%d", &k) == 1 && k >= 1 && k <= n) {
		qsort(arr, (size_t)n, sizeof(*arr), compare_ints);
		printf("%d\n", arr[k - 1]);
	}

	free(arr);
	return 0;
}
