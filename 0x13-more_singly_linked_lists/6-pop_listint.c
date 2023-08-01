#include "lists.h"

/**
 * pop_listint - A function that deletes a node of a linked list
 * @head: A pointer to the first elemet
 *
 * Return: the node inside the elements to be delected
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (num);
}
