#include "lists.h"

/**
  * print_listint - An entry that print a function
  * @h: a pointer
  *
  * Return: return the value of count
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
