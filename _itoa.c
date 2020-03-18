#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0' i++)
	{
	}
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}

}
/**
 * _itoa - reverses a string.
 * @str: string
 * @num: numbers
 * @base:base 10
 * Return: Always 0.
 */
char *_itoa(int num, char *str, int base)
{
	int i, rem, neg;

	i = neg = 0;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (num < 0 && base == 10)
	{
		neg = 1;
		num = num * -1;
	}

	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}
	if (neg == 1)
	{
		str[i++] = '-';
	}
	str[i] = '\0';

	rev_string(str);

	return (str);
}
