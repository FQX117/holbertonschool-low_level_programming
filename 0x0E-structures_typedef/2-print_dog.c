#include "dog.h"
/*
*/void print_dog(struct dog *d)

{
    if (d == NULL)
    
        return;
    
    else
    
    if (d->name == NULL)
    
        printf("(nil)\n");
    
    else
    printf("%s\n", d->name);
    
    if (d->age == 0 )
    
        printf("(nil)\n");
    
    else
    printf("%f3.1\n", d->age);
    if (d->owner == NULL)
    
        printf("(nil)\n");
    
    else
    printf("%s\n", d->owner);
}
