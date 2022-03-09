#include "lists.h"
/*
*/listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *x;
listint_t *p;
if (!head)
return (NULL);
p = *head;
x = malloc(sizeof(listint_t));
if (!x)
return (NULL);
x->n = n;
x->next = NULL;
if (*head == NULL)
{
*head = x;
return (*head);
}
while (p->next)
p = p->next;
p->next = x;
return (*head);
}
