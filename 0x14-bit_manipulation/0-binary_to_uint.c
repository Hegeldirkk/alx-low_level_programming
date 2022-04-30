#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to char.
 * Return: converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int l = 0;
	int i = 0;
	unsigned int sum = 0;

	if (!b)
	{
		return (0);
	}
	else
	{
		l = strlen(b);
		for (i = 0; i != l ; i++)
		{
			if (b[l - (i + 1)] == '1')
			{
				sum += 1 << i;
			}
			else if (b[l - (i + 1)] != '0')
			{
				return (0);
			}
		}
		return (sum);
	}
}
