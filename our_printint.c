#include "main.h"

/**
 * printint - print integer
 *
 * @aint: The integer to be printed
 * Return: int
 */
int our_printint(int aint)
{
	int i = 0;

	if (aint < 0)
	{
	i += our_putchar('-');
	aint = -aint;
	}

	if (aint / 10 != 0)
	{
		i += our_printint(aint / 10);
	}
	i += our_putchar('0' + (aint % 10));
	return (i);
}
