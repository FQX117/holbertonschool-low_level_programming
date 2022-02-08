#include "holberton.h"
/*
*/void reverse_array(int *a, int n)
{
int str;
int rev;
for (str = n - 1; str >= n / 2; str--)
{
rev = a[str];
a[str] = a[n - 1 - str];
a[n - 1 - str] = rev;
}
}
