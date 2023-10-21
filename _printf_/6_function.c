#include "main.h"

/**
  * print_p - prints out the address of a pointer
  * @pnters: variable placholder
  * Return: 0
  */

int print_p(va_list pnters)
{
	void *ptr = va_arg(pnters, void*);
	int chars_count = 0;
	char hexa_chars[] = "0123456789abcdef";
	int g;
	int leading_zeros = 1;

	our_putchar('0');
	our_putchar('x');
	chars_count += 2;

	for (g = (sizeof(void *) * 2 - 1); g >= 0; g--)
	{
		unsigned char nibble = ((unsigned long)ptr >> (g * 4)) & 0xF;
		if (nibble != 0 || leading_zeros == 0 )
		{
			leading_zeros = 0;
			our_putchar(hexa_chars[nibble]);
			chars_count++;
		}
	}

	return (chars_count);
}
