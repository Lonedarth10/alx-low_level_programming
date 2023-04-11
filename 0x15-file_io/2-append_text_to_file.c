#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fint;
	int nlettre;
	int rwrp;

	if (!filename)
		return (-1);

	fint = open(filename, O_WRONLY | O_APPEND);

	if (fint == -1)
		return (-1);

	if (text_content)
	{
		for (nlettre = 0; text_content[nlettre]; nlettre++)
			;

		rwrp = write(fint, text_content, nlettre);

		if (rwrp == -1)
			return (-1);
	}

	close(fint);

	return (1);
}

