#include "lists.h"
/**
 * free_list - Write a function that frees a list_t.
 * @head: pointer to the first element of the linked list you want to free.
 **/
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
