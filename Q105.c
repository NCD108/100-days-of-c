/* Q105: Find the majority element in an integer array. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("-1");
		return 0;
	}

	int *nums = malloc((size_t)n * sizeof(*nums));
	if (nums == NULL) {
		printf("-1");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nums[i]) != 1) {
			free(nums);
			printf("-1");
			return 0;
		}
	}

	int candidate = 0;
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (count == 0) {
			candidate = nums[i];
			count = 1;
		} else if (nums[i] == candidate) {
			count++;
		} else {
			count--;
		}
	}

	count = 0;
	for (int i = 0; i < n; i++) {
		if (nums[i] == candidate) {
			count++;
		}
	}

	printf("%d", count > n / 2 ? candidate : -1);
	free(nums);
	return 0;
}
