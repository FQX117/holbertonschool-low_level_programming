#include "hash_tables.h"
/**
* The djb2 Algorithm
*The algorithm for our hash function
*comes from computer scientist Dan Bernstein.
*It uses bit manipulation and prime numbers to create a hash index from a string.
*/unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 5381;
while((c = *str++))
{
hash = ((hash << 5) +hash) +c; /* hash * 33 + c */
}
return (hash);
}
