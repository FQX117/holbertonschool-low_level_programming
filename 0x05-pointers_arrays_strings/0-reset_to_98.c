#include <stdio.h>
#include <stdlib.h>
//
int main(void) 
{
int num = 0;
int *p = &num;
*p=98;
printf("%d\n", *p);
return 0;
}
