#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number.
 * @n: long int number.
 * @m: lon int number.
 * Return: number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int numb = 0;

	n = n ^ m;
	while (n)
	{
		numb += n & 1;
		n >>= 1;
	}
	return (numb);
}
