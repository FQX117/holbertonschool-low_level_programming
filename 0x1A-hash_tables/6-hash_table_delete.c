#include "hash_tables.h"
/*
 */void hash_table_delete(hash_table_t *ht)
{
hash_node_t *next;
hash_node_t *front;
unsigned long int x;
if (!ht)
{
return;
}
for (x = 0 ; x < ht->size ; x++)
{
front = ht->array[x];
while (front)
{
next = front->next;
free(front->key);
free(front->value);
free(front);
front = next;
}
}
free(ht->array);
free(ht);
}
