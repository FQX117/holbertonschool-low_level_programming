#include "lists.h"
/*
*/int _strlen(const char *c)
{
int x = 0;
for (; c[x]; x++)
;
return (x);
}

/*
*/list_t *add_node(list_t **head, const char *str)
{
list_t *add;
add = malloc(sizeof(list_t));
if (!head)
return (NULL);
if (str != NULL)
add->str = strdup(str);
add->len = _strlen(str);
add->next = *head;
*head = add;
return (*head);
}
