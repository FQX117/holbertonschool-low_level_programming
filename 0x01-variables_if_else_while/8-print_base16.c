#include <stdio.h>
/*
*/int main(void)
{
int a, b;
int x;
x = 'a';
b = '0';
for (a = 0 ; a < 16 ; a++)
{
if (a < 10)
{
putchar(b);
b++;
}
else
{
putchar(x);
x++;
}
}
putchar('\n');
return (0);
}
