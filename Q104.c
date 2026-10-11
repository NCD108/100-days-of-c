 #include <stdio.h>

int main(void)
{
	long long n;

	if (scanf("%lld", &n) != 1 || n <= 0)
		return 0;

	long long total = n * (n + 1) / 2;
	long long left = 0;

	for (long long x = 1; x <= n; ++x) {
		left += x;
		if (left == total - left + x) {
			printf("%lld\n", x);
			return 0;
		}
	}

	printf("-1\n");
	return 0;
}
