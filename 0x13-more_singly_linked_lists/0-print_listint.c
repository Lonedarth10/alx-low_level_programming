#include "lists.h"

/**
 * print_listint - Prints all the elements of a list.
 * @h: a pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	
	return (num_nodes);
}

