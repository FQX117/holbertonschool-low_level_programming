#include "main.h"
/*
*/ int main(int argc, char *argv[])
{
if (argc > 1 && argc < 4)
{
    int total = 0;
    for (; total < argc; total++)
    {
        total *= atoi(argv[total]);
    }
printf ("%d", total);
}
else
printf ("error\n");
return(0);
}
