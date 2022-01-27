#include "main.h"
#include <stdio.h>
/*
*/void times_table(void)
{
int l;
int h;
int p;
for (l = 0; l <= 9; l++)
{
putchar('0');
for (h = 1; h <= 9; h++)
{
p = l * h;
p(',');
p(' ');
if (p <= 9)
{
p(' ');
}
else
{
p((p / 10) + '0');
}
p((p % 10) + '0');
}
p('\n');
}
}
