#include "lists.h"
/*
*/void free_list(list_t *head)
{
	list_t *store;

	while (head != NULL)
	{
		store = head->next;
		free(head->str);
		free(head);
		head = store;
	}
}
  
