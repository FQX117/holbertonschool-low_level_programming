#include "holberton.h"
/*
*/char *string_toupper(char *str)
{
int x;
for (x = 0; str[x]; x++)
{
if (str[x] >= 'a' && str[x] <= 'z')
str[x] -= ' ';  //its a space
}
return (str);
}
