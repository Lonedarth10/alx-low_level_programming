#include "main.h"

/**
 * get_bit - It geets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value (at indices start at 0).
 *
 * Return: If an error occurs(-1).
 * else the value of the bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}

