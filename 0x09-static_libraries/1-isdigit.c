#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check if c is a digit of 0 through 9
 * @c: Int representing a character
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
