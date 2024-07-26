#include "main.h"
int _printf(const char *format, ...)
{
    va_list ptr;
    int i = 0, l = 0;

    va_start(ptr, format);

    if (format[i])
    {
        while (format[i])
        {
            if (format[i] == '%' && format[i + 1] == 'c')
                print_char(ptr), i = i + 2, l++;
            else if (format[i] == '%' && format[i + 1] == 's')
            {
                l = l + print_str(ptr), i = i + 2;
            }
            else
                _putchar(format[i]), i++, l++;
        }
    }
    va_end(ptr);
    return (l);
}
