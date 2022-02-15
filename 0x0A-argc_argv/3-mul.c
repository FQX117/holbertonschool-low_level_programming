#include "main.h"
#include <stdlib.h>
/*
*/ int main(int argc, char *argv[])
{
if (argc > 1 && argc < 4)
{
    int total = 0;
    for (; total < argc; total++)
    {
        total += atoi(argv[total]);
    }
printf ("%d\n", total);
}
else
printf ("error\n");
return(0);
}
