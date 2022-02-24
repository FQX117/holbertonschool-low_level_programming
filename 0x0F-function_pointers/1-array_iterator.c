#include "function_pointers.h"
/*
*this executes a fun of a fun
*/void array_iterator(int *array, size_t size, void (*action)(int))

{
unsigned int x = 0;
if (action == NULL)
return;
for (; x < size; x++)
action(array[x]);
}
