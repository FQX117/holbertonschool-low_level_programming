#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/*
* so now we will just print nember just random nuembers jk there not random
*/void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
int s = 1;
va_list ap;
if (!separator)
{
s = 0;
}
va_start(ap, n);
for (x = 0 ; x < n; x++)
{
printf("%d", va_arg(ap, int));
if (x < n - 1 && s != 0)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
