#include "lists.h"
/*
*/listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn, *cn;
/** nn = new node cn = curent node **/
	nn = malloc(sizeof(listint_t));
	if (!nn)
		return (NULL);
	nn->n = n;
	nn->next = NULL;
	if (!*head)
	{
		*head = nn;
		return (*head);
	}
	cn = *head;
	while (cn->next != NULL)
		cn = cn->next;
	cn->next = nn;
	return (*head);
}