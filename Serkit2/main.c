#include <stdio.h>

int main()
{
	int sum = 0, i, j;

	for (i = 1; i <= 100; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0) break;
		}
		if (i == j)
			sum += i;
	}
	
	printf("sum = %d", sum);

	return 0;
}