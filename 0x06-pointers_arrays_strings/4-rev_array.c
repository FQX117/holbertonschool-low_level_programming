#include "holberton.h"
/*
*/void reverse_array(int *a, int n)
{
int x;
while (a < n)
{
x = arr[a];
arr[a] = arr[n];
arr[n] = x;
a++;
n--;
}
}
