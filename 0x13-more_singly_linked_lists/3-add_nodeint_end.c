#include "lists.h"

/**
 * add_nodeint_end - An entry to a node at the end
 * @head: pointer to the first node
 * @n: data
 *
 * Return: A pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *temp = *head;

	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = current;

	return (current);
}
