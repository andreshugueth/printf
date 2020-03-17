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
typedf struct op
{
	char *p;
	int (*f)();
} checker;

int print_principal(c);
int print_c(va_list ap);
int print_percentage(void);
int print_s(va_list ap);
int print_d_i(va_list ap);

char *_itoa(int num, char *str, int base);
void rev_string(char *s);


#endif

