#include "holberton.h"
/**
 * _printf - My printf function
 * @format: arguments passed by the user
 *
 * Return: int fn or -1
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int fn;

	fn = 0;

	checker ops[] = {
		{"%c", print_c},
		{"%s", print_s},
		{"%%", print_percentage}
	};

	if (!format)
		return (-1);

	va_start(ap, format);

	fn = revision(format, ap, ops);

	va_end(ap);
	return (fn);
}
