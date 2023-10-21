#include "main.h"

/**
 * _printf - function that produces output to the stdout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, s_count, i_count, count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			our_putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			our_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s_count = our_puts(va_arg(args, char *));
			i++;
			count += (s_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			our_putchar('%');
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			i_count += our_putchar(va_arg(args, int));
			i++;
			count += (i_count - 1);
		}
		else
		{
			our_putchar('%');
		}
		count += 1;
	}

	va_end(args);
	return (count);
}
