#include "main.h"

/**
 * _puts_recursion: this function print a string.
 * @s: pointer block of memory to fill.
 * Return: *s.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
