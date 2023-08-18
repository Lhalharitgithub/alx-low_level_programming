#include "lists.h"

/**
 * free_dlistint -it illustratez the function that  freez a dlistint_t list.
 * @head: This showz pointer to head of the list
 *
 * Return: Showz nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
