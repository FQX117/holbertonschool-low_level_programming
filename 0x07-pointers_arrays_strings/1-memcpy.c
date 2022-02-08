#include "main.h"
/*
*dest is destination
*src is sorce
*n is how many byts to copy
*/char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;
for (; x < n; x++)
dest[x] = src[x];
return (dest);
}
