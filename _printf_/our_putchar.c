#include "main.h"
/**
  * our_putchar - prints a character
  * @c: expected input
  * Return: 1
  */

int our_putchar(char c)
{
	return (write(1, &c, 1));
}
