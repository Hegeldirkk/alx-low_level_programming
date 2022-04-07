#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments and follow new line
 * @argc: n args
 * @argv: arr args
 * Return: 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
