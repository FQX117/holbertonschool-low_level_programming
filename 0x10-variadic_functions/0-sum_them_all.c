#include "variadic_functions.h"
/*
*im trying somthing new check the header it dint work
*/int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int x, total = 0;
if (n == 0)
return (0);
va_start(ap, n);
for (x = 0 ; x < n; x++)
total += va_arg(ap, int);
va_end(ap);
return (total);
}
