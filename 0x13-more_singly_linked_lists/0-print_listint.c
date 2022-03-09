#include "lists.h"
/*
*/size_t print_listint(const listint_t *h)
{
int x = 0;
const listint_t *c = h;
for (; c; x++)
{
printf ("%d\n", (*c).n);
c = (*c).next;
}
return (x);
}
