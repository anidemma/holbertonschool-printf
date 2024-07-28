#include "main.h"
/**
 * print_dec - function
 * @ptr: va_list
 * Return: length of string
 */
int print_dec(va_list ptr)
{
	unsigned int num = va_arg(ptr, int);
	unsigned int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	count += print_number(num);
	return (count);
}
/**
 * print_number - function for print big number
 * @num: number
 * Return: count
 */
int print_number(unsigned int num)
{
	unsigned int count = 0;

	if (num / 10)
		count += print_number(num / 10);
	_putchar(num % 10 + '0');
	count++;
	return (count);
}
