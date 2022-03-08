#include "lists.h"
/*
*/size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	if (h->n == NULL)
		return (1);
	h = h->n;
	return (1 + list_len(h));
}
