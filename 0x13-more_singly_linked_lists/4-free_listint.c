#include "lists.h"
/*
*/void free_listint(listint_t *head)
{
	listint_t *p;
	if (!head)
		return;
		if (head)
		{
			p = head;
	head = head->next;
	free(p);
		}
}
