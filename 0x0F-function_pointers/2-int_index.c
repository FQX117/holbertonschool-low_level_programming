#include "function_pointers.h"
/*
*this dose a thing and i know hwo to find the thing not really 
*sure why best guess just tells me if its positive could be usful
*/int int_index(int *array, int size, int (*cmp)(int))

{
int x = 0;
if (size <= 0)
return (-1);

for (; x < size; x++)
{
if (cmp(array[x]))
return (x);
}
return (-1);
}
