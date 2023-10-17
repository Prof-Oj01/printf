#include "main.h"

/**
  * print_c - Prints a character
  * @chrt: character variable
  * Return: 1
  */

int print_c(va_list chrt)
{
	char c = va_arg(chrt, int);

	_putchar(c);

	return (1);
}


/**
  * print_s - Prints a string
  * @strg: string variable
  * Return: returns the character count
  */

int print_s(va_list strg)
{
	char *strings = va_arg(strg, char*);

	int s_count = 0;

	if (strings == NULL)
		strings = "(null)";

	while (*strings)
	{
		_putchar(*strings);
		s_count++;
		strings++;
	}

	return (s_count);
}

/**
  * print_perct - prints a %
  * @perct: % variable
  * Return: 1
  */

int print_perct(va_list perct)
{
	(void)perct;

	_putchar('%');

	return (1);
}
