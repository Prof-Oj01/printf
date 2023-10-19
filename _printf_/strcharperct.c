#include "main.h"

/**
 * print_char - print char
 * @arg: argument
 *
 * Return: 0 if successful
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	our_putchar(c);
	return (1);
}

/**
 * print_str - print string
 * @arg: argument
 *
 * Return: a - 1 the number of characters in string.
 */
int print_str(va_list arg)
{
	int a = 0;
	char *s = va_arg(arg, char *);

	if (!s)
		s = "(null)";

	while (s[a] != '\0')
	{
		our_putchar(s[a]);
		a++;
	}

	return (a);
}

