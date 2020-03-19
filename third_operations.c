#include "holberton.h"
/**
 * print_u - prints unsigned int
 * @ap: argument to be printed
 * Return: i
 */
int print_u(va_list ap)
{
	long int n, i;
	char *s;

	n = va_arg(ap, unsigned int);

	s = _itoa(n, 10);

	for (i = 0; s[i] != '\0'; i++)
	{
		print_principal(s[i]);
	}
	return (i);
}
/**
 * print_o - prints a number in octal
 * @ap: argument to be printed
 * Return: i
 */
int print_o(va_list ap)
{
	long int n, i;
	char *s;

	n = va_arg(ap, unsigned int);
	s = _itoa(n, 8);

	for (i = 0; s[i] != '\0'; i++)
	{
		print_principal(s[i]);
	}
	return (i);
}
/**
 * print_x - prints a number in hexidecimal
 * @ap: argument to be printed
 * Return: i
 */
int print_x(va_list ap)
{
	long int n, i;
	char *s;

	n = va_arg(ap, unsigned int);
	s = _itoa(n, 16);

	for (i = 0; s[i] != '\0'; i++)
	{
		print_principal(s[i]);
	}
	return (i);
}
/**
 * print_X - print x in uppercase
 * @ap: argument to be printed
 * Return: i
 */
int print_X(va_list ap)
{
	long int n, i;
	char *s;

	n = va_arg(ap, unsigned int);
	s = _itoa(n, 16);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		print_principal(s[i]);
	}
	return (i);
}

