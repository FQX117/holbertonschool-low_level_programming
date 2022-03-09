#include "lists.h"
/*
*/listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nn, *p;
unsigned int count = 1;
if (head)
{
nn = malloc(sizeof(listint_t));
if (nn == NULL)
return (NULL);
nn->n = n;
if (idx > 0)
{
p = *head;
while (p)
{
if (count == idx)
{
nn->next = p->next;
p->next = nn;
return (nn);
}
p = p->next;
count++;
}
if (idx > count)
return (NULL);
}
else
{
nn->next = *head;
*head = nn;
}
return (nn);
}
return (NULL);
}
