#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node in a certain index
 * @head: A pointer to the first node
 * @index: the index node to delete
 *
 * Return: 1 (Success) or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t j;
	listint_t *current = NULL;
	listint_t *temp = *head;

	j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (temp == NULL || !(temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
