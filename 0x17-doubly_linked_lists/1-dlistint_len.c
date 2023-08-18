#include "lists.h"

/**
 * dlistint_len - It showz the returnz the number of elementz in
 * a double linked list
 * @h:Showz the  head of the list
 *
 * Return: It illustratez the number of nodez
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
