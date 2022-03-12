#include "main.h"
/*
*/void print_binary(unsigned long int n)
{
unsigned long int temp = n;
int count = 0;
int i;
if (n == 0)
_putchar ('0');
while (temp > 0)
{
temp = temp >> 1;
count++;
}
for (count -= 1; count >= 0; count--)
{
i = n >> count;
if (i & 1)
_putchar('1');
else
_putchar('0');
}
}
