#include "main.h"
/*
*/int main(int argc, char *argv[])
{
    int x = 0;
    for (; x < argc; x++)
    printf("argv[%2d] : %s\n", x ,argv[x]);
    return(0);
}