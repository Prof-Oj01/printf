#include "main.h"

/**
  * print_b - prints a binary
  * @binry: variable placeholder
  * Return: 0
  */

int print_b(va_list binry)
{
	unsigned int num = va_arg(binry, unsigned int);
	int chrts_count = 0;
	int i, j;

	char binary[33];

	for (i = 31; i >= 0; i--)
	{
		binary[i] = (num & 1) ? '1' : '0';
		num >>= 1;
	}
	binary[32] = '\0';

	for (j = 0; j < 32; j++)
	{
		_putchar(binary[j]);
		chrts_count++;
	}
	return (chrts_count);
}
