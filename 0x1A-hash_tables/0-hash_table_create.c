#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: parameter for the size of the table.
 * Return: a pointer to the new table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table;

	/* Allocate memory needed for the hash table struct */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/* Initialize the size and array fieldsof the table */
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	/* Set the number of array elements to NULL */
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
