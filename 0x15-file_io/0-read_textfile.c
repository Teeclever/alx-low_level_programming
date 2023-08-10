#include "main.h"

/**
 * read_textfile- A function that Reads text file
 * @filename: the file text to be read
 * @letters: number of letters
 * Return: the printed number of bytes read and 0 when the
 * filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t value;
	ssize_t t;
	char *storage;
	ssize_t ptr;

	if (filename == NULL)
		return (0);

	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
		return (0);
	storage = malloc(sizeof(char) * letters);
	t = read(ptr, storage, letters);
	value = write(STDOUT_FILENO, storage, t);

	free(storage);
	close(ptr);
	return (value);
}
