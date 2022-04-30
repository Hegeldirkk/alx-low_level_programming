#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * @n: point to long number.
 * @index: int number.
 * Return: 1 or -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 16)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
