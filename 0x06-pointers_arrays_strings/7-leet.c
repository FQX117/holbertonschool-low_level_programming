#include "holberton.h"
/*
 */char *leet(char *s)
{
char set1[6] = {"AEOTL"};
char set2[6] = {"aeotl"};
char set3[6] = {"43071"};
int x;
int c;
for (x = 0; s[x] != '\0'; x++)
{
for (c = 0 ; c < 6 ; c++)
{
if (s[x] == set1[c] && s[a] == set2[c])
s[x] = set3[c];
}
}
return (s);
}
