#include "holberton.h"
/*
*/int _strcmp(char *s1, char *s2)
{
int x;
for (x = 0; x == 0 && s1 && s2; s1++, s2++)
x = (s1) - (s2);
return (x);
}
