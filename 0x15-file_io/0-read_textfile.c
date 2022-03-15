#include "main.h"
/*
*/size_t read_textfile(const char *filename, size_t letters)
{
int x;
x = open(filename, O_RDWR);
if (!filename)
return (0);
else if (x == -1)
return (0);
read(x, letters);
write(x, letters);
return (letters);
}
