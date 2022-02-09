#include "main.h"
/*
*/ char *_strpbrk(char *s, char *accept)
{
int x;
int c;
for (x = 0; s[x] != '\0'; x++)
{
for (c = 0; accept[c] != '\0'; c++)
{
if (s[x] == accept[c])
{
return (&s[x]);
}
}
if (s[x] == '\0')
{
break;
}
}
return (NULL);
}
