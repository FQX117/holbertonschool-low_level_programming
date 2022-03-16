#include "main.h"
/*
*/size_t read_textfile(const char *filename, size_t letters)
{
int x;
char *c;
x = open(filename, O_RDWR);
c = malloc(sizeof(char) * letters);
if (!filename)
return (0);
else if (x == -1)
return (0);
fread(x, c, letters);
fwrite(x, c, letters);
return (letters);
}
