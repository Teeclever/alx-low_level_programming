#include "lists.h"

/**
  *free_list - A function that free a list
  *@head: list to be free
  */

void free_list(list_t *head)
{
	list_t *current = head;

	list_t *tmp;

	while (head != NULL)
	{
		tmp = current->next;
		free(current->str);
		free(current);
		current = tmp;
	}
}
