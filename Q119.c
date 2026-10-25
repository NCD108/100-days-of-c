#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void)
{
	int n;
	if (scanf("%d", &n) != 1 || n < 2)
		return 0;

	size_t capacity = 1;
	while (capacity < (size_t)n * 2)
		capacity <<= 1;

	int *table = malloc(capacity * sizeof(*table));
	unsigned char *used = calloc(capacity, sizeof(*used));
	if (table == NULL || used == NULL) {
		free(table);
		free(used);
		return 1;
	}

	for (int i = 0; i < n; ++i) {
		int value;
		scanf("%d", &value);

		uint32_t hash = (uint32_t)value;
		hash ^= hash >> 16;
		hash *= 0x7feb352dU;
		hash ^= hash >> 15;
		size_t index = hash & (capacity - 1);

		while (used[index]) {
			if (table[index] == value) {
				printf("%d\n", value);
				free(table);
				free(used);
				return 0;
			}
			index = (index + 1) & (capacity - 1);
		}

		table[index] = value;
		used[index] = 1;
	}

	free(table);
	free(used);
	return 0;
}
