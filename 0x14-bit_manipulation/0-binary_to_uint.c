#include "main.h"
/*
*/unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	unsigned int i = 0;
    int decimal_num = 0, temp = 0, rem;
	if (b == NULL)
		return (0);

	for (i = 0; i != '\0'; i++)
	{

		if ((b[i] != 'b') && (b[i] != '0') && (b[i] != '1'))
			return (0);

		else
{    
      
    for (; b != 0; temp++)  
    {  
        rem = b[i] % 10;  
        b = b[i] / 10;  
        n = n + rem * pow( 2, temp);  
          
    }  
      
} 
}
return n;
}