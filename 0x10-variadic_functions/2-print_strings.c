#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/*
*learning has acured kinda
*/void print_strings(const char *separator, const unsigned int n, ...)

{
unsigned int x;
int y = 1;
char *c;
va_list ap;
if (!separator)
y = 0;
va_start(ap, n);
for (x = 0 ; x < n; x++)
{
if (!c)
printf("(nil)");
else
printf("%s", va_arg(ap, char *));
if (x < n -1 && y != 0)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
