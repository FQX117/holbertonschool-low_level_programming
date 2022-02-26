#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/*
*learning has acured kinda
*/void print_strings(const char *separator, const unsigned int n, ...)

{
unsigned int x;
va_list ap;
if (!separator)
return;
va_start(ap, n);
for (x = 0 ; x < n; x++)
{
if (!n)
printf("(nil)");
else
printf("%s", va_arg(ap, char *));
if (x < n)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
