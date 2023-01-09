#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array
 *
 * Return: NULL if something goes wrong, or
 * pointer to newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ha_ta;
	unsigned long int i;

	ha_ta = malloc(sizeof(hash_table_t));
	if (ha_ta == NULL)
		return (NULL);

	ha_ta->size = size;
	ha_ta->array = malloc(sizeof(hash_table_t *) * size);
	if (ha_ta->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ha_ta->array[i] = NULL;

	return (ha_ta);
}
