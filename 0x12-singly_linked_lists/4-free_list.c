#include "lists.h"
/*
*/void free_list(list_t *head)
{
list_t *x;
while (head != NULL)
{
x = head;
head = head->next;
free(x);
free(x->str);
}
}
