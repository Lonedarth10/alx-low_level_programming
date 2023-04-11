#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 (if success).
 * -1 (if it fails).
 */
int create_file(const char *filename, char *text_content)
{
	int fint;
	int nlettre;
	int rwrp;

	if (!filename)
		return (-1);

	fint = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fint == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlettre = 0; text_content[nlettre]; nlettre++)
		;

	rwrp = write(fint, text_content, nlettre);

	if (rwrp == -1)
		return (-1);

	close(fint);

	return (1);
}

