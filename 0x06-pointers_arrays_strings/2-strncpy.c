#include "holberton.h"
/*
*Write a function that copies a string.
*/char *_strncpy(char *dest, char *src, int n)
{
int x, c;
for (x = 0; src[x] != '\0' && c < n; x++, c++)
{
dest[c] = src[x];
}
return (dest);
}
