#include "holberton.h"
/*
*Write a function that concatenates two strings.
*/char *_strncat(char *dest, char *src, int n)
{
for (; dest; dest++)
{
for (; (n-- && src) && (dest == src); dest++, src++)
	dest = '\0';
}
	return (dest);
}
