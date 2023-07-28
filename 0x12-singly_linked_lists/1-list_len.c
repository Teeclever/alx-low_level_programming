#include "lists.h"

/**
  * list_len - A program that return element in a list
  * @h: pointer pointing to the list
  * Return: number of element in the list
  */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
