#include "main.h"

/**
 * print_r - prints the %r format specifier
 * @reverse: variable placeholder
 * Return: number of characters printed
 */
int print_r(va_list reverse)
{
    (void)reverse;

    our_puts("%r");
    return 2;
}

