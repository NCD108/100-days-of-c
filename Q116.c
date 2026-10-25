/* Q116: Find two distinct indices whose values add up to target. */
#include <stdio.h>

int main(void)
{
	int n;

	if (scanf("%d", &n) != 1 || n < 2) {
		printf("-1 -1\n");
		return 0;
	}

	int nums[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}

	int target;
	scanf("%d", &target);

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nums[i] + nums[j] == target) {
				printf("%d %d\n", i, j);
				return 0;
			}
		}
	}

	printf("-1 -1\n");
	return 0;
}
