#include "main.h"
#include <stdlib.h>
/*
*/ int main(int argc, char *argv[])
{
if (argc != 3)
{
    printf("Error\n");
    return (1);
}   
{
if (argc > 1 && argc < 4)
{
    int total = 1;
    int one = 1;
    for (; total < argc; total++)
    {
        one *= atoi(argv[total]);
    }
printf ("%d\n", one);
}    
return(0);
}
}
