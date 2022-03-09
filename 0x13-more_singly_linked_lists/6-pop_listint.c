#include "lists.h"
/*
*/int pop_listint(listint_t **head)
{
	int x;
	listint_t *cnt, *tmp;
    if (head == NULL)
		return (0);
	tmp = cnt = *head;
	if (*head)
	{
		x = cnt->n;
		*head = cnt->next;
		free(tmp);
	}
	else
		x = 0;
	return (x);
}
