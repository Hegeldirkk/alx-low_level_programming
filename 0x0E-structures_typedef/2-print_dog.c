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
			print("Name: (nil)");
		}
		else
		{
			print("Name: s%", d->name);
		}
		if (d->age == NULL)
		{
			print("Name: (nil)");
		}
		else
		{
			print("Name: f%", d->age);
		}
		if (d->owner == NULL)
		{
			print("Name: (nil)");
		}
		else
		{
			print("Name: s%", d->owner);
		}
	}
}
