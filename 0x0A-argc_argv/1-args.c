#include "main.h"
/*
*/int main(int argc, char *argv[] __attribute__((unused)))
{
int x = 0;
for (; x < argc; x++)
printf("%2d", x);
return (0);
}
