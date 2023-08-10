#include "main.h"

/**
 * append_text_to_file - A function that add text to a file
 * @filename: the name of the file
 * @text_content: The content to be appened
 * Return: 1 on success and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t ptr;
	int value;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	ptr = open(filename, O_WRONLY | O_APPEND);
		if (ptr == -1)
			return (-1);
	if  (text_content)
	{
		for (value = 0; text_content[value];)
			value++;
	len = write(ptr, text_content, value);
		if (len == -1)
			return (-1);
	}

	close(ptr);

	return (1);

}
