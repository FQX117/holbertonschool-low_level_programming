#include "main.h"
/*
*/void _puts(char *str)
{
int x;
for (x = 0; str[x] != '\0'; ++);
{
_putchar(str[x]);
}
_putchar('\n');
}
