#include "main.h"
/*
*/int main(int argc, char *argv[] __attribute__((unused)))
{
int x = 0;
for (; x < argc; x++)
printf("%d", x);
return (0);
}