#include "main.h"

/**
 * puts2 - prints one char out of 2
 * @str: type
 * Return 0
 */

void puts2(char *str)
{
	int j, i = 0;
	char a;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0 ; j < i ; j++)
	{
		if (j % 2 == 0)
		{
			a = *(str + j);
			_putchar(a);
		}
	}
	_putchar('\n');
}
