#include "main.h"

/**
 * set_bit - it sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value(atindices start at 0).
 *
 * Return: If an error occurs(-1).
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}

