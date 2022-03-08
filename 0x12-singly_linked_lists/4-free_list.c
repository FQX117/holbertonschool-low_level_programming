#include "lists.h"
/*
*/void free_list(list_t *head)
{
list_t *x;
while (head != NULL)
{
head = x;
x = head->next;
free(head);
free(head->str);
}
}
