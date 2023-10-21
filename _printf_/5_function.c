#include "main.h"

/**
  * print_S - prints a string
  * @strng: variable placeholder
  * Return: 0
  */

int print_S(va_list strng)
{
	char *string = va_arg(strng, char*);
	int chars_count = 0;
	char hexa_chars[] = "0123456789ABCDEF";

	if (string == NULL)
		string = "(null)";

	while (*string)
	{
		if (*string >= 32 && *string < 127)
		{
			our_putchar(*string);
		}
		else
		{

			our_putchar('\\');
			our_putchar('x');
			chars_count += 2;

			our_putchar(hexa_chars[(*string >> 4) & 0xF]);
			our_putchar(hexa_chars[*string & 0xF]);
			chars_count += 2;
		}

		string++;
		chars_count++;
	}

	return (chars_count);
}
