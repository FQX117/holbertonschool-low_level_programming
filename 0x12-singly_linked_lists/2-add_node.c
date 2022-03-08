#include "lists.h"
/*
*/int _strlen(const char *c)
{
int x = 0;
for (; c[x]; x++)
;
return (x);
}

#include "lists.h"
/*
*/list_t *add_node(list_t **head, const char *str)
{
list_t *add;
char *c;
int x;
add = malloc(sizeof(list_t));
if (!head)
return (NULL);
if (str != NULL)
{
    c = strdup(str);
    x = _strlen(str);
}
new->len = x;
new->str = c;
add->next = *head;
*head = add;
return (*head);
}
