/* Q103: Find the leftmost pivot index of an integer array. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	if (scanf("%d", &n) != 1 || n < 0)
		return 0;

	int *nums = malloc((size_t)n * sizeof(*nums));
	if (n > 0 && nums == NULL)
		return 1;

	long long total = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
		total += nums[i];
	}

	long long left_sum = 0;
	int pivot = -1;
	for (int i = 0; i < n; i++) {
		total -= nums[i];
		if (left_sum == total) {
			pivot = i;
			break;
		}
		left_sum += nums[i];
	}

	printf("%d\n", pivot);
	free(nums);
	return 0;
}
