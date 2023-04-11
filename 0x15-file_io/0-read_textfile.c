#include "main.h"

/**
 * read_textfile - it reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It returns 0(If error).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fint;
	ssize_t nred, nwrp;
	char *lettre;

	if (!filename)
		return (0);

	fint = open(filename, O_RDONLY);

	if (fint == -1)
		return (0);

	lettre = malloc(sizeof(char) * (letters));
	if (!lettre)
		return (0);

	nred = read(fint, lettre, letters);
	nwrp = write(STDOUT_FILENO, buf, nred);

	close(fint);

	free(lettre);

	return (nwrp);
}

