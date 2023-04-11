#include "main.h"

/*
 * binary_to_uint - it converts a binary number to an unsigned int.
 * @b: pointer to string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 (if error)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unint;
	int len, base_two;

	if (!b)
		return (0);

	unint = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			unint += base_two;
		}
	}

	return (unint);
}

