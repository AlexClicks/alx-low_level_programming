#include "variadic_functions.h"
#include <stdarg.h>

/*
*sum_them_all - Calculates the sum of allintegers
*@n: The number of paramters passed to the function
*@...: An exlipses
*Return: Return the sum of intergers
*/

int sum_them_all(const unsigned int n, ...)
{
  va_list ap;
  unsigned int i, sum;

  va_start (ap, n);      
  sum = 0;

  for (i = 0; i < n; i++)
    sum += va_arg (ap, int);   

  va_end (ap);              
  return sum;
}
