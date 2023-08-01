#include "lists.h"

/**
 * get_nodeint_at_index -a function that returns the node at a certain index in a list
 * @head: a pointer to a node in the linked list
 * @index: index of the node
 *
 * Return: pointer to the node we are aiming for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current ? current : NULL);
}
