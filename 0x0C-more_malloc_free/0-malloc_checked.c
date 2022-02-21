#include "main.h"
/*
*/void *malloc_checked(unsigned int b)

{
b = (int*) malloc(sizeof(int));
return(b);  
}
