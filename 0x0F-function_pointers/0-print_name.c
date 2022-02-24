#include "function_pointers.h"
/**
*this fun prints a name
*/void print_name(char *name, void (*f)(char *))

{
if (f == NULL)
return;
(f)(name);
}
