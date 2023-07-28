#include "lists.h"

/**
 * add_node - A function that adds the new node at the beginning
 * @head: pointer pointer to the list_t list
 * @str: A string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	 list_t *new_node;
	 unsigned int count = 0;

	while (str[count])
		count++;

	 new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	 new_node->str = strdup(str);
	 new_node->len = count;
	 new_node->next = (*head);
	 (*head) = new_node;
	return (*head);
}
