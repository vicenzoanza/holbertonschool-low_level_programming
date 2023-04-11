#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer of the list_t list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
count++;
}
return (count);
}
