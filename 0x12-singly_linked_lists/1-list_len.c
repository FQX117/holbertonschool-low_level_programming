#include "lists.h"
/*
*/size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	if (h->next == NULL)
		return (1);
	h = h->next;
	return (1 + list_len(h));
}
