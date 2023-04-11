#include "lists.h"
 /**
 * get_nodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head.
 * @index: index.
 * Return: if the node does not exist, return NULL.
 **/
dlistint_t *get_nodeint_at_index(dlistint_t *head, unsigned int index)
{
int n = 0;

while (head)
{
if (n == index)
return (head);
i++;
head = head->next;
}
return (NULL);
}
