#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - print binary representaton.
 * @n: int number.
 */

void print_binary(unsigned long int n)
{

	if (n != 1 && n != 0)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
