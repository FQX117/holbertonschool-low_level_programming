#include "lists.h"
/*
*/void free_listint(list_t *head)
{
list_t *x;
while (head)
{
x = head;
head = head->next;
free(x);
free(x->str);
}
}
