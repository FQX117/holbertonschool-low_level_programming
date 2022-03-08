#include "lists.h"
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
