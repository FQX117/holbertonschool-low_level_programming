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
if (n > 5)
{ printf("Last digit of %d is %d and is greater than 5", n, d); }
else if (n == 0)
{ printf("Last digit of %d is %d and is 0", n, d); }
else (n < 6);
{ printf("Last digit of %d is %d and is less than 6 and not 0", n, d); }
return (0);
}
