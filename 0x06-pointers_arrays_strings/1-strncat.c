#include "holberton.h"
/*
*Write a function that concatenates two strings.
*/char *_strncat(char *dest, char *src, int n)
{
int x;
int c;
for (x = 0; dest[x]; x++)
c = dest + x;
for (; src && n--; c++, src++)
c = src;
c = '\0';
return (dest);
}
