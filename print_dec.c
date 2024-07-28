#include "main.h"
/**
 * print_dec - function
 * @ptr: va_list
 * Return: length of string
 */
int print_dec(va_list ptr)
{
	int num = va_arg(ptr, int);
	unsigned int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		count += print_number(-num);
	}
	else
	{
		count += print_number(num);
	}
	return (count);
}
/**
 * print_number - function for print big number
 * @num: number
 * Return: count
 */
int print_number(int num)
{
	unsigned int count = 0;
	unsigned int n = (unsigned int) num;

	if (num < 0)
	{
		n = (unsigned int) -num;
	}
	if (n / 10)
	{
		count += print_number(n / 10);
	}
	_putchar(n % 10 + '0');
	count++;
	return (count);
}
