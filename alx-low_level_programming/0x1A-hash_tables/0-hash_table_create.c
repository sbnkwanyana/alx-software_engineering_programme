#include "hash_tables.h"

/**
 * hash_table_create - creates and returns a pointer to an empty hash table
 * @size - size of the hash table array
 * Return: pointer to the hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
