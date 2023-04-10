#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list.
 * @head: pointer to the head node.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *xxx;

while (head != NULL)
{
xxx = head;
head = head->next;
free(xxx);
}
}
