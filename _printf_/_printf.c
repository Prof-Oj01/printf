#include "main.h"
/**
 * _printf - function that produces output to the stdout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    int i = 0;

    if (!format)
        return (-1);
  
    va_start(args, format);

    for (i = 0; format[i]; i++)
    {
        if (format[i] != '%')
        {
            our_putchar(format[i]);
            count++;
        }
        else
        {
            i++;
            if (format[i] == 'c')
            {
                our_putchar(va_arg(args, int));
                count++;
            }
            else if (format[i] == 's')
            {
                char *str = va_arg(args, char *);
                if (!str)
                    str = "(null)";
                for (; *str; str++)
                {
                    our_putchar(*str);
                    count++;
                }
            }
            else if (format[i] == '%')
            {
                our_putchar('%');
                count++;
            }
            else if (format[i] == 'd' || format[i] == 'i')
            {
                int num = va_arg(args, int);
                int divisor = 1;
		int num_copy = num;

                if (num < 0)
                {
                    our_putchar('-');
                    count++;
                    num = -num;
                }

		while (num_copy / 10 != 0)
		{
		     num_copy /= 10;
		     divisor *= 10;
		}
                for (; divisor > 0; divisor /= 10)
                {
		    our_putchar('0' + num / divisor);
                    count++;
		    num %= divisor;
                }
            }
        }
    }

    va_end(args);
    return count;
}

