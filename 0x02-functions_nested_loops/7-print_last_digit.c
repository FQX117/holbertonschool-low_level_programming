#include "main.h"
#include <stdio.h>
/*
*/
int print_last_digit(int x)
{
n = (x % 10);
if (x >= 0)
{
_putchar('0' + x);
return (x);
}
else if (x < 0)
{
n = (x * -1);
_putchar('0' + x);
return (x);
}
return (0);
}
