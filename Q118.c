/* Q118: Find the missing number from 0 through n. */
#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	int missing = n;
	for (int i = 0; i < n; i++) {
		int value;
		scanf("%d", &value);
		missing ^= i ^ value;
	}

	printf("%d\n", missing);
	return 0;
}
