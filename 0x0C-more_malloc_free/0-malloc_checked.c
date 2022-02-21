#include "main.h"
/*
*/void *malloc_checked(unsigned int b)

{
int *p;
p = (int*)malloc(sizeof(int)*b);
if (p == NULL)
exit (98);
return(p);  
}
