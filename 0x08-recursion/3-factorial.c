#include "main.h" 
/*
*/int factorial(int n)
{
 int x = 1, c;
 c = n;

  if (c > 0)
  {
    --c;
    
  x = x * c;
  }
  return (x);
}
