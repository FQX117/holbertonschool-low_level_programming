#include "main.h"

/*
*/void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
if(c==2||c==4)
{
c++;
continue;
}
_putchar(c);
c++;
}
_putchar('\n');
}
