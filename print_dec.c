#include "main.h"
/**
 * print_dec - function
 * @ptr: va list
 * Return: i
 */
int print_dec(va_list ptr)
{
	int b;
	int i;

	b = va_arg(ptr, int);

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
/**
 * print_dec_int - function
 * @b: variable
 * Return: i
*/
int print_dec_int(int b)
{
	int count = 0;

	if (b < 0)
	{
		_putchar('-');
		i++;
		b = -b;
	}

	if (b / 10)
		i += print_dec_int(b / 10);

	_putchar(b % 10 + '0');
	i++;

	return (i);
}
