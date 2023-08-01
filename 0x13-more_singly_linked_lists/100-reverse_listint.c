#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: A pointer pointing to the element of the node
 *
 * Return: A first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *current = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}

	*head = current;

	return (*head);
}
