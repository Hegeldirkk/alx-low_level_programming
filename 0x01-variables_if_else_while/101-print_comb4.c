#include <stdio.h>

/**
 * main - three combinaison
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (i == j || i == k || j == k || j <= i || k <= j)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55 && j == 56 && k == 57)
				{
					break;

				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}