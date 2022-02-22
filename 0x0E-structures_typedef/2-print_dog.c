#include "dog.h"
/*
*/void print_dog(struct dog *d)

{
    if (d == NULL)
    {
        printf("\0");
    }
    if (d->name == NULL)
    {
        printf("%s\n", "(nil)");
    }
    else
    printf("%s\n", d->name);
    
    if (d->age == 0 )
    {
        printf("%s\n", "(nil)");
    }
    else
    printf("%f3.1\n", d->age);
    if (d->owner == NULL)
    {
        printf("%s\n", "(nil)");
    }
    else
    printf("%s\n", d->owner);
}
