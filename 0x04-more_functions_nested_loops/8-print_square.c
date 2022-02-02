#include "main.h"
/*
*/void print_square(int size)
{
int x;
int c;
if (size > 0)
{
for (x = 0; x < size; x++)
{
for (c = 0; c < size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
