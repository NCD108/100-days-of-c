/* Q108: Product of Array Except Self */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	int *nums = malloc((size_t)n * sizeof(*nums));
	int *answer = malloc((size_t)n * sizeof(*answer));

	if (nums == NULL || answer == NULL) {
		free(nums);
		free(answer);
		return 1;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}

	int prefix = 1;
	for (int i = 0; i < n; i++) {
		answer[i] = prefix;
		prefix *= nums[i];
	}

	int suffix = 1;
	for (int i = n - 1; i >= 0; i--) {
		answer[i] *= suffix;
		suffix *= nums[i];
	}

	printf("[");
	for (int i = 0; i < n; i++) {
		if (i > 0) {
			printf(",");
		}
		printf("%d", answer[i]);
	}
	printf("]\n");

	free(nums);
	free(answer);
	return 0;
}
