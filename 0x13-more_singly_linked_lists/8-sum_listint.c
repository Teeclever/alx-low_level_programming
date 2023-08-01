#include "lists.h"

/**
 * sum_listint - A function that calculates the sum of all data in listint_t list
 * @head: A pointer to the first node
 *
 * Return: total sum
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
    int totalsum = 0;

	while (current)
	{
		totalsum += current->n;
		current = current->next;
	}

	return (totalsum);
}
