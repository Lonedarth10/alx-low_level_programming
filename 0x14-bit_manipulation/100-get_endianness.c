#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian is 0.
 * If little-endian - 1.
 */
int get_endianness(void)
{
	int y = 1;
	char *endian = (char *)&y;

	if (*endian == 1)
		return (1);

	return (0);
}

