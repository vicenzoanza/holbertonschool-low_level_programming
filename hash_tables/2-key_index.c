#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: key.
 * @size: size.
 * Return: index at which the key/value pair should be stored in the 
 * array of the hash table.
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
 unsigned long int mx = hash_djb2(key);
 
 return (mx % size);
}
