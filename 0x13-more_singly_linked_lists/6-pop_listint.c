#include "lists.h"
/*
*/int pop_listint(listint_t **head)
{
listint_t *t;
int x = 0;
if (!(*head))
return (0);
t = (*head)->next;
x = (*head)->n;
free(*head);
*head = t;
return (x);
}
