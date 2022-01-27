#include "main.h"
#include <stdio.h>
/*
*/
int print_last_digit(int x)
{
x = (x % 10);
if (x >= 0)
{
_putchar('0' + x);
return (x);
}
else if (x < 0)
{
x = (x * -1);
_putchar('0' + x);
return (x);
}
return (0);
}
