#include "lists.h"
/*
*/size_t print_listint(const listint_t *h)
{
size_t x = 0;
for (; h; x++)
h = h->next;
return (x);
}