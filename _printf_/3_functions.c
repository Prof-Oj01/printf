#include "main.h"

/**
  * print_u -prints unsigned intergers
  * @unsign: variable placeholder
  * @count: placeholder for count value
  * Return: 0
  */

void print_u(va_list unsign, int *count)
{
	unsigned int a = va_arg(unsign, unsigned int);
	char buffer[12];
	int j;
	int i = 0;

	do {
		buffer[i++] = '0' + a % 10;
		a /= 10;
	}
	while (a)

	for (j = i - 1; j >= 0; j--)
	{
		our_putchar(buffer[j]);
		(*count)++;
	}
}

/**
  * print_o - prints octal integers
  * @octal: variable placeholder
  * @count: placeholer for count value
  * Return: 0
  */

void print_o(va_list octal, int *count)
{
	unsigned int h = va_arg(octal, unsigned int);
	char buffer[12];
	int g;
	int j = 0;

	do {
		buffer[j++] = '0' + (h & 7);
		h >>= 3;
	}
	while (h)

	for (g = j - 1; g >= 0; g--)
	{
		our_putchar(buffer[g]);
		(*count)++;
	}
}

/**
  * print_x - prints hex integers
  * @hexa: placeholder one
  * @count: placeholder forcount values
  * Return: 0
  */

void print_x(va_list hexa, int *count)
{
	unsigned int m = va_arg(hexa, unsigned int);
	char buffer[12];
	int f;
	int d = 0;

	char hex_chars[] = "0123456789abcdef";

	do {
		buffer[d++] = hex_chars[m & 0xf];
		m >>= 4;
	}
	while (m)

	for (f = d - 1; f >= 0; f--)
	{
		our_putchar(buffer[f]);
		(*count)++;
	}
}


/**
  * print_X - prints hex integers
  * @hexadec: placeholder variable
  * @count: placeholder for count value
  * Return: 0
  */

void print_X(va_list hexadec, int *count)
{
	unsigned int m = va_arg(hexadec, unsigned int);
	char buffer[12];
	int f;
	int d = 0;

	char hex_chars[] = "0123456789ABCDEF";

	do {
		buffer[d++] = hex_chars[m & 0xf];
		m >>= 4;
	}
	while (m)

	for (f = d - 1; f >= 0; f--)
	{
		our_putchar(buffer[f]);
		(*count)++;
	}
}






