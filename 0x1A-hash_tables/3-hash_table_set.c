#include "hash_tables.h"
/*
*/int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *element;
if (ht == NULL)
return (0);
element = malloc(sizeof(hash_node_t));
if (element == NULL)
return (0);
element->key = strdup(key);
element->value = strdup(value);
insert_element_list(ht, element);
return (1);
}
/*
 */void insert_element_list(hash_table_t *ht, hash_node_t *element)
{
unsigned long int index;
hash_node_t *tmp;
index = key_index((unsigned char *)element->key, ht->size);
tmp = ht->array[index];
if (ht->array[index] != NULL)
{
tmp = ht->array[index];
while (tmp != NULL)
{
if (strcmp(tmp->key, element->key) == 0)
break;
tmp = tmp->next;
}
if (tmp == NULL)
{
element->next = ht->array[index];
ht->array[index] = element;
}
else
{
free(tmp->value);
tmp->value = strdup(element->value);
free(element->value);
free(element->key);
free(element);
}
}
else
{
element->next = NULL;
ht->array[index] = element;
}
}
