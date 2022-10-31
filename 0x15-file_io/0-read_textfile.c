#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text and print it to POSIX
 * @filename: name of file char
 * @letters:number of letters to read size_t
 * Return: read the file display it or error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(0);

	return (w);
}
