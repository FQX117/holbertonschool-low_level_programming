#include "lists.h"
/*
*/void free_list(list_t *head)
{
	list_t *x;

	while (head != NULL)
	{
		x = head->next;
		free(head->str);
		free(head);
		head = x;
	}
}
  
