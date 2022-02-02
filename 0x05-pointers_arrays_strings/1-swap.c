#include "main.h"
/*
*/void swap_int(int *a, int *b)
{
*a = *b;
*a = 98;
*b = 42;  
*b = *a;
}
