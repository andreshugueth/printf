#include "holberton.h"
/**
 * print_principal - It prints to stdout.
 * @c: Char to print.
 * Return: It returns to stdout.
 */
int print_principal(int c)
{
	return (write(1, &c, 1));
}
/**
 * print_c - It prints to stdout.
 * @ap: List VF to print.
 * Return: It returns to stdout.
 */
int print_c(va_list ap)
{
	return (print_principal(va_arg(ap, int)));
}
/**
 * print_percentage - It prints to stdout.
 * Return: It returns to stdout.
 */
int print_percentage(void)
{
	print_principal('%');
	return (1);
}
/**
 * print_s - It prints to stdout.
 * @ap: List VF to print.
 * Return: It returns to stdout.
 */
int print_s(va_list ap)
{
	char *s;
	int i;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		print_principal(s[i]);
	}
	return (i);
}
