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
putchar(',');
putchar(' ');
if (p <= 9)
{
putchar(' ');
}
else
{
putchar((p / 10) + '0');
}
putchar((p % 10) + '0');
}
putchar('\n');
}
}
