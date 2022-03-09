#include "lists.h"
/*
*/int sum_listint(listint_t *head)
{
	int total = 0;

	if (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
