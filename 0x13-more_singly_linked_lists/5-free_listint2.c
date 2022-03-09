#include "lists.h"
/*
*/void free_listint2(listint_t **head)
{
	listint_t *tmp, *cnt;
    if (!head)
		return;
	cnt = *head;
	if (cnt != NULL)
	{
		tmp = cnt;
		cnt = cnt->next;
		free(tmp);
	}
	*head = NULL;
}
