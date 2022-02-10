#include "main.h" 
/*
*/int factorial(int n)
{
 int x = 1;
 

  if (n > 0)
  {
    --n;
    
  x = x * n;
  }
  return (x);
}
