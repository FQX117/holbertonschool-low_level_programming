#include "main.h"
/* 
*/void print_chessboard(char (*a)[8])
{
int x;
int c;
for (x = 0; x < 8; x++)
{
for (c = 0; c < 8; c++)
{
_putchar(c);
if (a[c] == a[8])
{
_putchar('\n');
}
}
}
}
