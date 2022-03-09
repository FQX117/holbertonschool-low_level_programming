#include "lists.h"
/*
*/size_t print_listint(const listint_t *h)
{
int x = 0;
const listint_t *x = h;
for (; h; x++)
{
printf ("%d\n", h->n);
h = h->next;
}
return (x);
}
