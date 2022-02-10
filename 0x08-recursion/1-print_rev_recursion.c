# include "main.h"
#include <string.h>
void _print_rev_recursion(char *s)
{
  
if (*s != '\0' && *s != '\n')

_print_rev_recursion(++s);
_putchar (*s);

  
  

}
