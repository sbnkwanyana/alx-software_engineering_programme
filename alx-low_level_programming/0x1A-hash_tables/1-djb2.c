#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: string to hash
 * Return: hashed value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int table;
	int c;

	table = 5381;
	while ((c = *str++))
		table = ((table << 5) + table) + c;  /* table * 33 + c */

	return (table);
}
