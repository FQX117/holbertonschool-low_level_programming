#include "lists.h"
/*
*/int _strlen(const char *c)
{
int x = 0;
for (; c[x]; x++)
;
return (x);
}
