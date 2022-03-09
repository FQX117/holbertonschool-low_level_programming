#include "lists.h"
/*
*/size_t listint_len(const listint_t *h)
{
size_t x = 0;
for (; h; x++)
h = h->next;
return (x);
}
