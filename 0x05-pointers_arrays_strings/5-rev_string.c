#include "main.h"
/*
*/void rev_string(char *s)
{
int c;
int x;
int tmp;
int size;
while (s[c] != 0)
{
c++;
}
size = c;
i = 0;
x = size - 1;
while (c < x)
{
tmp = s[c];
s[c] = s[x];
s[x] = tmp;
c++;
x--;
}
}
