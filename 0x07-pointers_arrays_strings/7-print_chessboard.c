#include "main.h"
/* 
*/void print_chessboard(char (*a)[8])
{
int c, x;
for (c = 0; c < 8; c++)
{
for (x = 0; x < 8; x++)
{
_putchar (a[c][x]);
}
_putchar ('\n');
}
}
