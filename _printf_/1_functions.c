#include "main.h"

/**
  * print_d - prints a decimal integer
  * @intgrs: integer variable
  * Return: 0
  */
int print_d(va_list intgrs)
{
	int num = va_arg(intgrs, int);
	int chrt_count = 0;
	int ifNegative = 0;
	int i = 0;
	int j;
	char numOfStr[12];

	if (num < 0)
	{
		ifNegative = 1;
		num = -num;
	}

	while (num > 0)
	{
		numOfStr[i++] = num % 10 + '0';
		num /= 10;
	}

	if (ifNegative)
	{
		numOfStr[i++] = '-';
	}

	for (j = i - 1; j >= 0; j--)
	{
		our_putchar(numOfStr[j]);
		chrt_count++;
	}
	return (chrt_count);
}

/**
  * print_i - prints an integer

  */
int print_i(va_list intgrs)
{
	int num = va_arg(intgrs, int);
	int chrt_count = 0;
	int ifNegative = 0;
	int i = 0;
	int j;
	char numOfStr[12];

	if (num < 0)
	{
		ifNegative = 1;
		num = -num;
	}

	while (num > 0)
	{
		numOfStr[i++] = num % 10 + '0';
		num /= 10;
	}

	if (ifNegative)
	{
		numOfStr[i++] = '-';
	}

	for (j = i - 1; j >= 0; j--)
	{
		our_putchar(numOfStr[j]);
		chrt_count++;
	}
	return (chrt_count);
}
