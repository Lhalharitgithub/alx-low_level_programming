#include "lists.h"

/**
 * get_dnodeint_at_index - It illustratz the function tht returnz the nth node 
 * of a dlistint_t linked list.
 * @head: showz the pointer to head of the list
 * @index: This is the index of the node to search for, starting from 0
 *
 * Return: The nth node or the null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
