#include "holberton.h"
/*
*Write a function that concatenates two strings.
*/char *_strncat(char *dest, char *src, int n)
 {
int x;
int c = strlen(dest);
for (x = 0; x < n && src[x] != '\0'; x++)
{
 dest[c + x] = src[x];
 dest[c + x] = '\0';
}
return (dest);
} 
