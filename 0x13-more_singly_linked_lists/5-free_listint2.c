#include "lists.h"
/*
*/void free_listint2(listint_t **head)
{
listint_t *cnt;
if (!head)
return;
else if (*head)
{
cnt = *head;
*head = (*head)->next;
free(cnt);
}
*head = NULL;
}
