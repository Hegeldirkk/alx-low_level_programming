#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/*initialize var*/
	unsigned long int index;
	hash_node_t **array = NULL;
	hash_table_t *hash_table_new = NULL;

	/*allocate hash table*/
	hash_table_new = malloc(sizeof(hash_table_t));
	if (!hash_table_new)
		return (NULL);

	hash_table_new->size = size;

	/*allocate hash node array*/
	array = malloc(size * sizeof(hash_node_t));

	if (!array)
		return (NULL);

	for (index = 0; index < size; ++index)
		array[index] = NULL;

	hash_table_new->array = array;
	return (hash_table_new);
}
