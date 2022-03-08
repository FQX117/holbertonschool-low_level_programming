#include "lists.h"
/*
*/void free_list(list_t *head)
{
list_t *x;
while (head != NULL)
{
head = x;
x = head->next;
free(x);
free(x->str);
}
}
