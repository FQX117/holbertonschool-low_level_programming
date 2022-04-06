#include "hash_tables.h"
/**
 * Write a function that deletes a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
if (!ht)
return;
for (i = 0; i < ht->size; i++)
free_list(ht->array[i]);
free(ht->array);
free(ht);
}
