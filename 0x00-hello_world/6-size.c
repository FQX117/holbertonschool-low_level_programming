#include <stdio.h>
int main(void) 
{char *variabletype[] = {"char", "float", "int", "short", "long", "long long"};
{for (int i = 0; i < 11;++i) {
printf("Size of %s is %u\n",variabletype[i], (unsigned int)(sizeof(variabletype[i])));
}
return 0;
}}
