#include "lists.h"

/**
 * add_node_end - A func that adds a new node at the end of a linked list
 * @head: pointer pointer to the list
 * @str: string
 *
 * Return: NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int count = 0;
	list_t *current = *head;

	while (str[count])
	count++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	while (current->next)
	current = current->next;
	current->next = new_node;

	return (new_node);
}
