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

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = 0;
	table = (hash_table_t *)calloc(table->size, sizeof(hash_table_t));

	if (!table->size)
                return (NULL);
	else
		for (; i < table->size; i++)
			table->array[i] = NULL;

	return (table);
}
