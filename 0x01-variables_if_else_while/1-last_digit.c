#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n, d;

srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10;
printf("Last digit of $n is", d);
if (n > 5)
{ printf("and is greater than 5"); }
else if (n == 0)
{ printf("and is 0", d); }
else if (n < 6)
(n > 0);
{ printf("and is less than 6 and not 0", d); }
return (0);
}
