#include "main.h"
#include <stdlib.h>
/*
*/ int main(int argc, char *argv[])

{
if (argc < 4 && argc > 1)
{
int total = 1;
int one = 1;
for (; total < argc; total++)
{
one *= atoi(argv[total]);
}
printf("%d\n", one);
}
else
printf("Error\n");
return (0);
}
