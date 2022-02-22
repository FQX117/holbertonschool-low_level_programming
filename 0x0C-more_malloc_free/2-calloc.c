#include "main.h"
/*
*/void *_calloc(unsigned int nmemb, unsigned int size)

{
unsigned int x, y;
char *new;
if (nmemb == 0 || size == 0)
return (NULL);
y = (nmemb * size);
new = malloc(y);
if (new == NULL)
return (NULL);
for (x = 0; x < y; x++)
{
new[x] = 0;
}
return (new);
}
