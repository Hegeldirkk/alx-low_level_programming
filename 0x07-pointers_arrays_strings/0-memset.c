#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to char
 * @b: varibale char.
 * @n: varibale int.
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n != i)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
