#include "main.h"

/**
  * print_r - prints in reverse
  * @reverse: variable placeholder
  * Return: 0
  */

int print_r(va_list reverse)
{
	char *strng = va_arg(reverse, char*);
	int count_val = 0;
	int length_val = 0;
	int j;

	if (strng == NULL)
		strng = "(null)";

	while (strng[length_val] != '\0')
	{
		length_val++;
	}

	for (j = length_val - 1; j >= 0; j--)
	{
		our_putchar(strng[j]);
		count_val++;
	}

	return (count_val);
}
