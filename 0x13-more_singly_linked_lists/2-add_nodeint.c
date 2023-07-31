#include "lists.h"

/**
  * add_nodeint - An entry that add to add to a node
  * @head: the pointer to a node
  * @n: int value
  *
  *Return: value of the head
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	current->n = n;
	current->next = NULL;

	current->next = *head;
	*head = current;

	return (*head);
}
