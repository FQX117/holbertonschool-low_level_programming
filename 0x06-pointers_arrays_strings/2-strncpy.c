#include "holberton.h"
/*
*/char *_strncpy(char *dest, char *src, int n)
{
int x, c;
c = 0;
for (x = 0; src[x] != '\0' && c < n; x++, c++)
{
dest[c] = src[x];
}
return (dest);
}
