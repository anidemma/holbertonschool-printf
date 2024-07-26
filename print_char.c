#include "main.h"
/**
 * print_char -  Print the parameter
 * @ptr: va_list
 * Return: Always 0
 * ------------------------------------------------------------
 */
int print_char(va_list ptr)
{
	char a;

	a = _putchar(va_arg(ptr, int));
	return (a);
}
