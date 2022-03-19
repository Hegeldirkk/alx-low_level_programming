#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Print triangle dependent on the parameter size.
 * @size : The height of the triangle
 * Return: Void.
 */
void print_triangle(int size)
{
	int i;
	int x;
	int spaces;
;
	for (i = 0; i < size; i++)
	{
		for (spaces = size - 1 - i; spaces > 0; spaces--)
		{
			putchar(' ');
		}
		for (x = 0; x <= i; x++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}
