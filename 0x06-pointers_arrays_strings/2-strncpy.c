#include "holberton.h"
/*
*Write a function that copies a string.
*/char *_strncpy(char *dest, char *src, int n)
{
 strcpy(src, dest);
_strncpy (dest, src, n);
return (dest);
}
