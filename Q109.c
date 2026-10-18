/* Q109: Maximum sum of a subarray of size k. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, k;

	/* Enter n, the n array elements, and k. */
	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (arr == NULL) {
		return 1;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			return 0;
		}
	}

	if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
		free(arr);
		return 0;
	}

	long long window_sum = 0;
	for (int i = 0; i < k; i++) {
		window_sum += arr[i];
	}

	long long maximum = window_sum;
	for (int i = k; i < n; i++) {
		window_sum += arr[i] - arr[i - k];
		if (window_sum > maximum) {
			maximum = window_sum;
		}
	}

	printf("%lld\n", maximum);
	free(arr);
	return 0;
}
