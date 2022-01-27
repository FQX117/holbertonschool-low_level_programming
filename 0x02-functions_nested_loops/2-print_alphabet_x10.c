#include "main.h"
#include <stdio.h>
#include <ctype.h>
/*
*/int main(void)
{
int x, i;
for (i = 0; i <10; i++)
{
for (x = 'a'; x <= 'z'; x++)
putchar(x);
putchar('\n');
return (0);
}
}
