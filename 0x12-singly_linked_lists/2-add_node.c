#include "lists.h"
/*
*/list_t *add_node(list_t **head, const char *str)
{
list_t *add;
if (!head)
exit(98);
add = malloc(sizeof(list_t));
if (!add)
exit(98);
add->str = strdup(str);
add->x = _strlen(str);
add->n = *head;
*head = add;
return (*head);
}
