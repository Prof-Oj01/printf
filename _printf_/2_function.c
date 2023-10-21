#include "main.h"

/**
 * print_b - prints a binary number
 * @binry: va_list argument containing the number to print
 * Return: number of characters printed
 */
int print_b(va_list binry)
{
	unsigned int num = va_arg(binry, unsigned int);
	int chrts_count = 0;
	int k;
	int initial = 0;
	char binary[32];

	for (k = 31; k >= 0; k--)
	{
		if ((num >> k) & 1)
		{
			initial = 1;
		}
		if (initial)
		{
			binary[31 - k] = ((num >> k) & 1) ? '1' : '0';
		}
	}

	binary[32] = '\0';

	if (initial == 0)
	{
		our_putchar('0');
		chrts_count++;
	}

	for (k = 0; k < 32; k++)
	{
		our_putchar(binary[k]);
		chrts_count++;
	}

	return (chrts_count);
}
