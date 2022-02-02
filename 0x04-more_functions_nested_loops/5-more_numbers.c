#include "main.h"
/*
 */void more_numbers(void)
{
int x;
int c;
for (x = 1; x <= 10; x++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10)
{
_putchar(c / 10 + '0');
}
_putchar(c % 10 + '0');
}
_putchar('\n');
}
}
