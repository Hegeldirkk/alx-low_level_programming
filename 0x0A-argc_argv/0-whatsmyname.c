#include <stdlib.h>
#include <stdio.h>

/**
 * main - function
 * @argc: argv size array & number of command line arguments 
 * @argv: array of size argc & containing the program command line arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
