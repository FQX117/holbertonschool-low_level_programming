#include "main.h"

void _puts_recursion(char *s)
{
  if (*s != '\0')
  {
_puts_recursion (s);
  s++;
    
  }
  else
  _putchar ('\n');
}
