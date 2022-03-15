#include "main.h"

/**
 *print_alphabet - check the code print 10 A...Z
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
char c = 'a';
int time;
for (time = 0; time < 10; time++)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
