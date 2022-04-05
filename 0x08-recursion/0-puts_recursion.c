#include "main.h"

/**
 * _puts_recursion - print a string.
 * @s: pointer block of memory to fill.
 * Return: No.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		fputs('\n');
		return;
	}
	fputs(*s);
	_puts_recursion(s + 1);
}
