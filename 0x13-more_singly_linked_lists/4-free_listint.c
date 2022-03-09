#include "lists.h"
/*
*/void free_listint(listint_t *head)
{
	if (!head)
		return;
	head = head->next;
	free(head);
}