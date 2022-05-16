#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible of two digits.
 * Return: 0.
 */

int main(void)
{
	int c = 0;
	int b = 0;
	int a = 0;

	while (c < 10)
	{
		if (c != 9)
		{
			for (b = a; b < 10; b++)
			{
				putchar(48 + c);
				if (c == b)
					putchar(48 + ++b);
				else
					putchar(48 + b);
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		c++;
	}
	exit(EXIT_SUCCESS);
	return (0);
}
