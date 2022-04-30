#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit.
 * @n: int and long number.
 * @index: unsigned int number.
 * Return: value of the bit at index index or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int getbit;

	getbit = (n >> index);
	return (getbit & 1);
}
