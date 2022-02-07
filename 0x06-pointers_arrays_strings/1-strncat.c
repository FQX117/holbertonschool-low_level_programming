#include "holberton.h"
/*
*Write a function that concatenates two strings.
*/char *_strncat(char *dest, char *src, int n)
 {
int x, c;
x = 0;
while (dest[x] != '\0')
{
++x;
}
for  (c = 0; src[c] != '\0'; ++c, ++x)
{
dest[x] = src[c];
}
dest[x] = '\0';
return (dest);
} 
