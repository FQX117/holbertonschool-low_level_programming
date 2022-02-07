#include "holberton.h"
/*
*/char *_strncpy(char *dest, char *src, int n)
{
int x;

for (x = 0; src[x] != '\0' && x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
