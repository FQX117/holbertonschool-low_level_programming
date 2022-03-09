#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *x, *p;

	if (head && *head)
	{
		if (!index)
		{
			x = *head;
			*head = (*head)->next;
			free(x);
			return (1);
		}
		p = *head;
		for (count = 1; p; count++)
		{
			if (count == (index))
			{
				x = p;
				p = p->next;
				x->next = p->next;
				free(p);
				return (1);
			}
			p = p->next;
		}
		return (-1);
	}
	return (-1);
}
