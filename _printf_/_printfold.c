#include "main.h"

/**
 * _cprintf - function to replicate printf
 * @format: format to be printed.
 *
 * Return: 0 if successful.
 */

int _cprintf(const char *format, ...)
{
	va_list arg;
	int i, j, chrt_count = 0;

	print_dc data[] = {
		{"c", print_c}, {"s", print_s}, {"%", print_perct}
	};
	va_start(arg, format);
	if (!format)
		return (-1);
	i = 0;
	while (*(format + i))
	{
		if (format[i] == '%')
		{
			if (!format[i + 1] || format[i + 1] == ' ')
				return (-1);
			j = 0;
			while (format[i + 1] != *(data[j].c) && j < 3)
				j++;
			if (j < 3)
			{
				chrt_count = chrt_count + data[j].func_ptr(arg);
				i++;
			}
		}
		else
		{
			our_putchar(*(format + i));
			chrt_count++;
		}
		i++;
	}
	va_end(arg);
	return (chrt_count);
}
