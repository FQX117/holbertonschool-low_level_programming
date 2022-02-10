# include "main.h"
#include <string.h>
void _print_rev_recursion(char *s)
{
_print_rev_recursion(++s);
_putchar (*s);
}
