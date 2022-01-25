#include <stdio.h>
int main(void)
{
int x;
for (int x = 'A'; x <= 'z'; x++)
{
if (x != "e" && x != "q")
  putchar(x);
}
return (0);
}
