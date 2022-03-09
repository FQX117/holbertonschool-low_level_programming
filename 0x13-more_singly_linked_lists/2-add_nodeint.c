#include "lists.h"
/*
*/listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;
/** nn = new node **/
	nn = malloc(sizeof(listint_t));
	if (nn)
	{
	nn->n = n;
	nn->next = *head;
	*head = nn;
	return (*head);
}
return (NULL);
}
