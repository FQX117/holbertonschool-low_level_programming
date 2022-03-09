#include "lists.h"
/*
*/listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
listint_t *cnt, *nn;
unsigned int x = 0;
/** nn = new node **/
nn = malloc(sizeof(listint_t));
if (!nn || !nn)
return (NULL);
nn->n = n;
if (index == 0)
{
nn->next = *head;
*head = nn;
return (nn);
}
if (*head = 0)
return (NULL);
cnt = *head;
for (; x < index -1; x++)
{
if (!cnt)
return (NULL);
cnt = cnt->next;
}
nn->next = cnt->next;
cnt->next = nn;
return (nn);
}
