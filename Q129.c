#include <stdio.h>

int main(void)
{
	FILE *file = fopen("numbers.txt", "r");
	if (file == NULL) {
		return 1;
	}

	long long number, sum = 0;
	int count = 0;

	while (fscanf(file, "%lld", &number) == 1) {
		sum += number;
		count++;
	}

	fclose(file);

	printf("Sum = %lld\n", sum);
	printf("Average = %.2f\n", count > 0 ? (double)sum / count : 0.0);

	return 0;
}
