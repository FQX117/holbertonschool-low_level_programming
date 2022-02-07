#include "holberton.h"
/*
*Write a function that copies a string.
*/char *_strncpy(char *dest, char *src, int n)
{
memset(dest, '\0', sizeof(dest))
strcpy(src);
_strncpy (dest, src, n);
return (dest);
}
