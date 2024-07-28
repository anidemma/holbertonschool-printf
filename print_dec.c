#include "main.h"
/**
 * print_dec - function
 * @ptr: va list
 * Return: i
 */
int print_dec(va_list ptr)
{
	char *b;
	int i;

	b = va_arg(ptr, char*);

	if (b < 0)
	{
		_putchar('-');
		b = -1 * b;
	}

	i = b / 10;
	if (i)
		print_dec(b / 10);

	_putchar(b % 10 + '0');
	return (i);
}
