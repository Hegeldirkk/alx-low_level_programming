#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible of two digits.
 * Return: 0.
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i == j || j <= i)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
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
	putchar('\n');
	return (0);
}
