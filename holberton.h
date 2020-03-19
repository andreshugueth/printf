#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
/**
 * struct op - checker struct
 *
 * @p: possibility
 * @f : function to be used
 */
typedef struct op
{
	char *p;
	int (*f)();
} checker;

int print_principal(int c);
int print_c(va_list ap);
int print_percentage(void);
int print_s(va_list ap);
int print_d_i(va_list ap);
int print_b(va_list ap);
int print_u(va_list ap);
int print_o(va_list ap);
int print_x(va_list ap);
int print_X(va_list ap);

char *_itoa(long int num, int base);
void rev_string(char *s);

int revision(const char *format, va_list ap, struct op ops[]);

#endif

