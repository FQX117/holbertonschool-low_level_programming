#include <stdio.h>
int main()
{
for(int x = 'A'; x <= 'z'; x++)
{
x = tolower(x);
putchar(x);
}
return 0;
}
