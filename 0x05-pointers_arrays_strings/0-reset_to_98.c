#include <stdio.h>
#include "main.h"
/*
*/void reset_to_98(int *n) 
{
   
    char c = 98;
    
*n=98;


putchar(c / 10 + '0');
putchar(c % 10 + '0');
}
