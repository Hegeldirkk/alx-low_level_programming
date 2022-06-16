#include <stdio.h>

/**
 * main - fibonacci 3
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int lim = 4000000, bef = 0;
	unsigned long int aft = 1, R = 0;
	unsigned long int sum = 0;

	while (lim > R)
	{
		R = bef + aft;
		if ((R % 2) == 0)
		{
			sum += R;
		}
		bef = aft;
		aft = R;
	}
	printf("%li\n", sum);
	return (0);
}
