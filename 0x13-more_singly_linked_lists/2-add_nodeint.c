#include "lists.h"
/*
*/listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;
/** nn = new node **/
	nn = *head;
	nn = malloc(sizeof(listint_t));
	if (!nn)
		return (NULL);
	nn->n = n;
	nn->next = *head;
	*head = nn;
	return (*head);
}
