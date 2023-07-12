#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ppt;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	ppt = malloc(sizeof(char) * (i + 1));

	if (ppt == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		ppt[j] = str[j];

	return (ppt);
}
