
#include "lists.h"

/**
 * listint_len - A program that returns the number of node
 * @h: a pointer
 *
 * Return: return a number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count  = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
