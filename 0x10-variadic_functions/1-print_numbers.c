#include "variadic_functions.h"
/*
* so now we will just print nember just random nuembers jk there not random
*/void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
    va_list ap;
    if (!separator)
    return;
    va_start(ap, n);
    for (x = 0 ; x < n; x++)
    {
    printf("%d", va_arg(ap, int));
    if (x < n)
    printf("%s", separator);
    }
    printf("\n");
    va_end(ap);
}
