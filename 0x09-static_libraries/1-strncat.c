#include "holberton.h"
/*
*Write a function that concatenates two strings.
*/char *_strncat(char *dest, char *src, int n)
{
int x, c;
for (x = 0; dest[x] != '\0'; x++)
{
}
for (c = 0; c < n && src[c] != '\0'; c++)
{
dest[x] = src[c];
x++;
}
if (c < n)
{
dest[x] = '\0';
}
return (dest);
}
