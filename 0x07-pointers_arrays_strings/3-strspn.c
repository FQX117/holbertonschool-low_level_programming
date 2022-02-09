#include "main.h"
/*
*/ unsigned int _strspn(char *s, char *accept)
{
{
int numof = 0;
int x = 0;
int c = 0;
for (;s[x] != '\0' && s[x] != ' '; x++)
{
for (;accept[c] != '\0'; c++)
{
if (accept[c] == s[x])
numof++;
}
c = 0;
}
return (numof);
}
}
