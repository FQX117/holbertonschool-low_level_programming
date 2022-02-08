#include "main.h"
/*
*/char *_memset(char *s, char b, unsigned int n)
{
int x = 0;
for (; n; x++, n--)
s[x] = b;
return (0);
}
