#include "holberton.h"
/**
 * print_d_i - print decimal int
 * @ap: argument
 * Return: i
 */
int print_d_i(va_list ap)
{
	int n, i;
	char *s;

	n = va_arg(ap, int);
	s = malloc(sizeof(char *));

	_itoa(n, s, 10);

	for (i = 0; s[i] != '\0'; i++)
	{
		print_principal(s[i]);
	}
	free(s);
	return (i);
}

