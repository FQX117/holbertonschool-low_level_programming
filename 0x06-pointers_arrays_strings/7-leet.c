#include "holberton.h"
/*
 */char *leet(char *s)
{
char set1[6] = {"AEOTL"};
char set2[6] = {"aeotl"};
char set3[6] = {"43071"};
int x;
int b;
for (x = 0; s[x] != '\0'; x++)
{
for (b = 0 ; b < 6 ; b++)
{
if (s[x] == set1[b] && s[a] == set2[b])
s[x] = set3[b];
}
}
return (s);
}
