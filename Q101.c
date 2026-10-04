/* Find the first and last occurrence of a target in a sorted array. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, target;

	if (scanf("%d", &n) != 1 || n <= 0)
		return 0;

	int *nums = malloc((size_t)n * sizeof(*nums));
	if (nums == NULL)
		return 1;

	for (int i = 0; i < n; i++)
		scanf("%d", &nums[i]);
	scanf("%d", &target);

	int left = 0, right = n - 1, first = -1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] >= target) {
			if (nums[mid] == target)
				first = mid;
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}

	int last = -1;
	left = 0;
	right = n - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] <= target) {
			if (nums[mid] == target)
				last = mid;
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	printf("%d,%d\n", first, last);
	free(nums);
	return 0;
}
