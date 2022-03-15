#include "main.h"

/**
 *print_alphabet_x10 - check the code
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
int time;
for (time = 0; time < 10; time++)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
