#include "holberton.h"
/*
*Write a function that copies a string.
*/char *_strncpy(char *dest, char *src, int n)
{
_strcpy (src);
_strncpy (dest, src, n);
return (dest);
}
