#include "holberton.h"
/*
*Write a function that concatenates two strings.
*/char *_strncat(char *dest, char *src, int n)
 {
int c;
n = 0;
while (dest[n] != '\0')
{
++n;
}
for  (c = 0; src[c] != '\0'; ++c, ++n)
{
dest[n] = src[c];
}
dest[n] = '\0';
return (dest);
} 
