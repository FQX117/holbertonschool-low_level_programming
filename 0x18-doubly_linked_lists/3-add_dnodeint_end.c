#include "lists.h"
/*
 */dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *ptr;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
if (*head == NULL)
{
*head = new;
new->next = NULL;
new->prev = NULL;
new->n = n;
return (new);
}
ptr = *head;
while (ptr->next)
ptr = ptr->next;
new->n = n;
new->next = NULL;
new->prev = ptr;
ptr->next = new;
return (new);
}
