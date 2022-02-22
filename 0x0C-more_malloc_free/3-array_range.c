#include "main.h"
/*
*/int *array_range(int min, int max)

{
int x, c;
int *p;
if (min > max)
return (NULL);
c = min;
p = (int *) malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
return (NULL);
for (x = 0; x <= (max - min); x++)
{
p[x] = c;
c++;
}
return (p);
}
