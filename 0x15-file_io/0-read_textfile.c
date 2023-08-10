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

	ptr = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	storage = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	value = write(STDOUT_FILENO, buf, t);

	free(storage);
	close(ptr);
	return (value);
}
