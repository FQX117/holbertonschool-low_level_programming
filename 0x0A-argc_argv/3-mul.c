#include "main.h"
#include <stdlib.h>
/*
*/ int main(int argc, char *argv[])
{
if (argc > 1 && argc < 4)
{
    int total = 1;
    for (; total < argc; total++)
    {
        total += atoi(argv[total + 1]);
    }
printf ("%d\n", total);
}
else
printf ("error\n");
return(0);
}
