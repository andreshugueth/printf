#include "holberton.h"
/**
 * print_d_i - print decimal int
 * @ap: argument
 * Return: i
 */
int print_d_i(va_list ap)
{
	long int n, i;
	char *s;

	n = va_arg(ap, int);

	s = _itoa(n, 10);

	for (i = 0; s[i] != '\0'; i++)
	{
		print_principal(s[i]);
	}
	return (i);
}
/**
 * print_b - prints binary
 * @ap: argument passed by user
 * Return: int i
 */
int print_b(va_list ap)
{
	long int n, i;
	char *s;

	n = va_arg(ap, unsigned int);

	s = _itoa(n, 2);
	for (i = 0; s[i] != '\0'; i++)
	{
		print_principal(s[i]);
	}
	return (i);
}

