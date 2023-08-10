#include "main.h"
#include <stdio.h>

/**
  * errorprint - a function that check errors
  * @file_place: initial file to copy from
  * @file_to: destination file you want to copy
  * @argv: argument vector
  * Return: no return
  */

void errorprint(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
	}
}

 /**
   * main - A function copy content of a file to another
   * @argc: argument count
   * @argv: agument vector
   * Return: 0 0n success
   */

int main(int argc, char *argv[])
{
	int file_place;
	int file_to, error_close;
	ssize_t value, len;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_place file_to");
		exit(97);
	}
	file_place = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errorprint(file_place, file_to, argv);

	value = 1024;
	while (value == 1024)
	{
		value = read(file_place, buff, 1024);
		if (value == -1)
			errorprint(-1, 0, argv);
		len = write(file_to, buff, value);
			if (len == -1)
			errorprint(0, -1, argv);
	}
	error_close = close(file_place);
		if (error_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't close ptr %d\n", file_place);
			exit(100);
		}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close ptr %d\n", file_to);
		exit(100);
	}
	return (0);
}
