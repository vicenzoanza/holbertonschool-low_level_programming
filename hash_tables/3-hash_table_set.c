#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: Pointer.
 * @key: string.
 * @value: Value.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *head = NULL;

	if (!ht || !key || !value || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head)
	{
		if (!strcmp(head->key, key))
		{
			free(head->value);
			head->value = strdup(value);
			if (!head->value)
				return (0);
			return (1);
	}
	head = head->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
	free(new_node);
	return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
	free(new_node->key);
	free(new_node);
	return (0);
	}
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
