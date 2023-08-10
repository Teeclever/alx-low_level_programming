#include "main.h"

/**
  * create_file - A function that create and write into file
  * @filename: the file to be created
  * @text_content: the content to be copied
  * Return: 1 if success or -1 if failed
*/


int create_file(const char *filename, char *text_content)
{
	ssize_t ptr;
	int value;
	int len;

	if (filename == NULL)
		return (0);
	ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ptr == -1)
	return (-1);

	if (text_content == NULL)
		text_content = "";
	for (value = 0; text_content[value];)
		value++;
	len = write(ptr, text_content, value);
	if (len == -1)
		return (-1);
	close(ptr);
	return (1);
}
