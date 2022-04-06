#include "hash_tables.h"
/**
* Write a function that gives you the index of a key
* Returns the index at which the key/value pair should be stored in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
if (!size)
return (0);
hash = hash_djb2(key);
return (hash % size);
}
