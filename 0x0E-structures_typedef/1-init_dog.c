#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: pointer to struct type dog
 * @name: pointer to char name's dog
 * @age: age's dog
 * @owner: pointer to char owner's dog
 * Return: No.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
