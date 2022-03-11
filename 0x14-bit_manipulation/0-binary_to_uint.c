#include "main.h"
#include "_strlen.c"
/*
*/unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0, count = 0, total = 0;
if (b == NULL)
return (0);
x = _strl(b);
while (x--)
{
if (b[x] != 48 && b[x] != 49)
return (0);
if (b[x] == 49)
total += 1 << count;
count++;
}
return (total);
}
