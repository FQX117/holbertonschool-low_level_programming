#include "main.h"
#include <stdio.h>
/*
*/
int _isalpha(int x)
{
if (x >= 'a' && x <= 'z')
{
return (1);
}
else if (x >= 'A' && x <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
