#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - prints numbers
 * @n: n parametre
 *
 * Description: prints 
 * Return: Always 0
 */

void print_to_98(int n)
{
	int i;
	int s;

	if (n > 98)
		s = -1;
	else if (n < 98)
		s = 1;
	else
		s = 0;

	i = n;

	do {
		if (i < 0)
			_putchar('-');
		if (abs(i) > 99)
			_putchar('0' + abs(i) / 100);
		if (abs(i) > 9)
			_putchar('0' + (abs(i) % 100) / 10);
		_putchar('0' + abs(i) % 10);
		if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}

		i = i + s;
	} while (i != 98);
	if (n != 98)
		{
		_putchar('9');
		_putchar('8');
		}
	_putchar('\n');
}
