#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table.
 * @key: key.
 * Return: value associated with the element, NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);
	node = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (node != NULL)
	{
	if (strcmp(node->key, key) == 0)
	return (node->value);
	node = node->next;
}
return (NULL);
}
