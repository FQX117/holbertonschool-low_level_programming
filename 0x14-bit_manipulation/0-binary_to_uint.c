#include "main.h"
/*
*/unsigned int binary_to_uint(const char *b)
{
unsigned int x;
unsigned int c;
if (b == NULL)
return (0);
for (c = 0; c != '\0'; c++)
{
if ((b[c] != 'b') && (b[c] != '0') && (b[c] != '1'))
return (0);
else
{
while (c != '\0')
{
if (b[c] == '1')
x = c * 2;
else if (b[c] == '\0' - 1)
{
if (b[c] == '1')
x = x + 1;
}
}
}
}
return (x);
}
