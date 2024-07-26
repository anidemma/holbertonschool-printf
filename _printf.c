#include "main.h"
/**
 * _printf - Print the parameter
 * @format: Pointer
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0, l = 0;

	va_start(ptr, format);

	if (format[i])
	{
		while (format[i])
		{
			if (format[0] == '%' && !format[1])
				return (-1);
			else if (format[i] == '%' && format[i + 1] == 'c')
				print_char(ptr), i = i + 2, l++;
			else if (format[i] == '%' && format[i + 1] == 's')
			{
				l = l + print_str(ptr), i = i + 2;
			}
			else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
			{
				l = l + print_dec(ptr);
				i = i + 2;
			}
			else if (format[i] == '%' && format[i + 1] == '%')
				_putchar('%'), i = i + 2, l++;
			else
				_putchar(format[i]), i++, l++;
		}
	}
	va_end(ptr);
	return (l);
}
