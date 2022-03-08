#include "lists.h"
/*
*/size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str)
			printf("[%d] %s%s", h->x, h->str, "\n");
		else
			printf("[%d] %s%s", 0, "(nil)", "\n");
		if (h->n)
		{
			return (1 + print_list(h->n));
		}
		return (1);
	}
	return (0);
}
