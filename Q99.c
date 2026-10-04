 #include <stdio.h>

int main(void)
{
	int day, month, year;

	scanf("%d/%d/%d", &day, &month, &year);
	printf("%02d-Apr-%04d", day, year);

	return 0;
}
