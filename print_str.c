#include "main.h"
/**
 * print_str - Print the parameter
 * @ptr: va_list
 * Return: Always 0
 * -------------------------------------------------------------
 * 
 */
int print_str(va_list ptr)
{
  char *b;
  int i;

  b = va_arg(ptr, char*);
  if (b == NULL)
  {
    b = "(null)";
  }
  for (i = 0; b[i] != '\0'; i++)
  {
    _putchar(b[i]);
  }
  return (i);
}
