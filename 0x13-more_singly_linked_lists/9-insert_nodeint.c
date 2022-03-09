#include "lists.h"
/*
*/listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *cnt, *nn;
/** nn = new node **/
	cnt = *head;
	nn = malloc(sizeof(listint_t));
	if (!nn)
		return (NULL);
	nn->n = n;
	if (!index)
	{
		nn->next = cnt;
		*head = nn;
		return (*head);
	}
	while (index > 1)
	{
		cnt = cnt->next;
		index--;
		if (!cnt)
		{
			free(nn);
			return (NULL);
		}
	}
	nn->next = cnt->next;
	cnt->next = nn;
	return (nn);
}
