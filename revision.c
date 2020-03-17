#include "holberton.h"
/**
 * revision - checks type of operation to be used
 * @format: first argument passed by user
 * @ap: variadic function
 * @ops: checher struct
 * Return: int/count
 */
int revision(const char *format, va_list ap, struct op ops[])
{
	int i, j, count;

	i = j = count = 0;

	while (format != NULL && format[i] != 0)
	{
		if (format[i] != '%' && format[i] != 0)
		{
			count += print_principal(format[i]);
		}
		else if (format[i] == '%')
		{
			while (j < 3)
			{
				if (format[i + 1] == ops[j].p[1])
				{
					count += ops[j].f(ap);
					i++;
					break;
				}
				if (j == 2 && format[i + 1] != ops[j].p[1])
				{
					count += print_principal(format[i]);
				}
				j++;
			}
		}
		i++;
	}
	return (count);
}

