#include "main.h"
/*
*/void *malloc_checked(unsigned int b)

{
malloc(sizeof(int)*b);
return(b);  
}
