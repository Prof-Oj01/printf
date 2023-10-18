#include "main.h"

/**
 * our_puts - prints string
 *
 * @c: string
 * Return: no of byte
 */

int our_puts(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			our_putchar(c[count]);
		}
	}
	return (count);
}
