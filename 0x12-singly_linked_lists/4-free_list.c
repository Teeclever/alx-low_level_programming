#include "lists.h"

/**
  *free_list - A function that free a list
  *@head: list to be free
  */

void free_list(list_t *head)
{
	list_t *current;


	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
