#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key (can be an empty string)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;
	char *key_copy, *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	key_copy = strdup(key);
	if (key_copy == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(key_copy);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	/* If key already exists, update value */
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_copy;
			free(key_copy);
			return (1);
		}
		temp = temp->next;
	}

	/* Create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(key_copy);
		free(value_copy);
		return (0);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
