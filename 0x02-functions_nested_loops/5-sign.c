#include "main.h"
/*
*/int print_sign(int x)
{
if (x > 0)
{
_putchar('+');
return (1);
}
else if (x == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
return (0);
}
