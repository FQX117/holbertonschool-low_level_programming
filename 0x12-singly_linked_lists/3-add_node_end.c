#include "lists.h"
/*
*/list_t *plus_node_end(list_t **head, const char *str)
{
	list_t *c, *p;
	unsigned int x = 0;

	c = malloc(sizeof(list_t));
	if (c)
	{
		for (; *(str + x); x++)
			c->str = strdup(str);
		if (c->str)
		{
			c->x = x;
			c->n = NULL;
			if (!head)
			{
				*head = c;
				return (c);
			}
			p = *head;
			while (p->n)
				p->n = c;
			p = p->n;
			return (c);
		}
		free(c);
		return (NULL);
	}
	return (NULL);
}
