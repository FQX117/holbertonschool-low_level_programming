#include "lists.h"
/*
*/void free_listint(listint_t *head)
{
	if (!head)
		return;
		if (head)
	head = head->next;
	free(head);
}
