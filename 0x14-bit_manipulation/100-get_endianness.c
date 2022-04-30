#include <stdio.h>
#include "main.h"

/**
 * get_endianness - check the endianness.
 * @void: parametrer.
 * Return: 0 big, 1 litlle.
 */

int get_endianness(void)
{
	int get_end = 1;
	char *a = (char *)&get_end;

	if (a[0] == 1)
		return (1);
	else
		return (0);
}
