#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: first node.
 * @n: number.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node;
dlistint_t *xxx;

node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);

node->n = n;

if (*head == NULL)
*head = node;
else
{
xxx = *head;
while (xxx->next != NULL)
xxx = xxx->next;
xxx->next = node;
}
return (node);
}
