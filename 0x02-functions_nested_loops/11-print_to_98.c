#include "main.h"
#include <stdio.h>
/*
*/void print_to_98(int x)
{
if (x >= 98)
{
while (x > 98)
{
printf("%i, ", x--);
}
printf("%i\n", x);
}
else
{
while (x < 98)
{
printf("%i, ", x++);
}
printf("%i\n", x);
}
}
