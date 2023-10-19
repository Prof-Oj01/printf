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
	int k, i;
	int initial = 0;

	char binary[32];

	for (k = 31; k >= 0; k--)
	{
		if ((num >> k) & 1)
		{
			initial = 1;
		}

		if(initial)
		{
			binary[31 - k] = ((num >> k) & 1) ? '1' : '0';
		}
	}

	binary[32] = '\0';

	if(initial)
	{
		for (i = 0; i < 32; i++)
		{
			our_putchar(binary[i]);
			chrts_count++;
		}
	}
	else
	{
		our_putchar('0');
		chrts_count++;
	}

	return (chrts_count);
}
