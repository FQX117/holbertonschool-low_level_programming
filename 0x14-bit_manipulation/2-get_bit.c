#include "main.h"
/*
*/int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int temp = n;
int count = 0, i;
int array[1050];
if (index >= sizeof(n) * 8)
return (-1);
if (n == 0 && index == 0)
return (0);
while (temp > 0)
{
temp = temp >> 1;
count++;
}
for (count -= 1; count >= 0; count--)
{
i = n >> count;
if (i & 1)
array[count] = 1;
else
array[count] = 0;
}
return (array[index]);
}
