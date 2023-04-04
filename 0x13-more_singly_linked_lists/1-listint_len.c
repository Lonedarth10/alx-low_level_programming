#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: pointer to the head of the list.
 *
 * Return: numbers of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t numnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}

