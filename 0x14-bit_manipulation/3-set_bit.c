#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit.
 * @n: int and long number.
 * @index: unsigned int number.
 * Return: value of the bit at index index or -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= ( 1 << index);
	return (1);
}
