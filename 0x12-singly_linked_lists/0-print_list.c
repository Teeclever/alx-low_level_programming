#include "lists.h"

/**
  * print_list - A program that print all linked list element
  * @h: pointer pointing to list to print
  *
  *Return: the number of printed nodes
  */

size_t print_list(const list_t *h)
{
	size_t n = 0;

		while (h)
		{
			if (!h->str)
			printf("[0] (nil)\n");
			else
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			n++;
		}

	return (n);
}

