# include "main.h"

void _print_rev_recursion(char *s)
{
  if (*s != '\0')

   _print_rev_recursion(s);
  s++;
putchar (s);
}
