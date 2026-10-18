 #include <stdio.h>

int main(void) {
	int n;

	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	long long value;
	if (scanf("%lld", &value) != 1) {
		return 0;
	}

	long long current_sum = value;
	long long maximum_sum = value;

	for (int i = 1; i < n; i++) {
		if (scanf("%lld", &value) != 1) {
			return 0;
		}

		current_sum = current_sum > 0 ? current_sum + value : value;
		if (current_sum > maximum_sum) {
			maximum_sum = current_sum;
		}
	}

	printf("%lld\n", maximum_sum);
	return 0;
}
