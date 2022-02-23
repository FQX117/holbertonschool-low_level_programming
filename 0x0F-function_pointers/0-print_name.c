#include "function_pointers.h"
/*this fun prints a name
*/void print_name(char *name, void (*f)(char *))

{
int x = 0;
for (; x < *name; x++)
{
    f(x);
}
  
}