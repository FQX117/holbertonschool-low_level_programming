#include "main.h"
/*
*/char *_strcat(char *dest, char *src)
{
int c;
int x;
for (x = 0; dest[x] != '\0'; x++)
;
for (c = 0; src[c] != '\0'; c++)
{
dest[x] = src[c];
x++;
}
dest[x] = '\0';
return (dest);
}
