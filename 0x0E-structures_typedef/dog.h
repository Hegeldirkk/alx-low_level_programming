#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - Define a new type struct dog.
 *
 * @name: pointeur de variable name vers le noms de caractères dog.
 * @age: variable de type float de dog.
 * @owner: pointeur de variable owner vers le noms de caractères dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
