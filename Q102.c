/* Q102: Find the index of the first element greater than or equal to x. */
#include <stdio.h>

int main(void)
{
	int n;

	if (scanf("%d", &n) != 1 || n <= 0)
	{
		printf("-1");
		return 0;
	}

	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int x;
	scanf("%d", &x);

	int left = 0, right = n - 1, answer = -1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] >= x)
		{
			answer = mid;
			right = mid - 1; /* Search for the first occurrence. */
		}
		else
		{
			left = mid + 1;
		}
	}

	printf("%d", answer);
	return 0;
}
