#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct char_print - print data
 * @c: char
 * @func_ptr: function printer
 */
typedef struct char_print
{
	char *c;
	int (*func_ptr)(va_list arg);
} print_dc;

/* function prototypes */
int our_putchar(char c);
int our_puts(char *c);
int our_printint(int aint);
int _printf(const char *format, ...);
int _cprintf(const char *format, ...);
int print_c(va_list chrt);
int print_char(va_list arg);
int print_s(va_list strg);
int print_str(va_list arg);
int print_perct(va_list perct);
int print_d(va_list intgrs);
int print_i(va_list intgrs);
int print_b(va_list binry);
void print_u(va_list unsign, int *count);
void print_o(va_list octal, int *count);
void print_x(va_list hexa, int *count);
void print_X(va_list hexadec, int *count);
int print_S(va_list strng);
int print_p(va_list pnters);
int print_r(va_list reverse);


#endif
