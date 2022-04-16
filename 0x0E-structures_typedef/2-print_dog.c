#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: pointer to struct type dog.
 * Return: No.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else
		{
			printf("Name: s%", d->name);
		}
		printf("Age: f%", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
		}
		else
		{
			printf("Owner: s%", d->owner);
		}
	}
}
