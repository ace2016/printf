#include "main.h"

/**
 * print_R -- prints a string in rot13 format
 * @R: string
 * Return: number of characters printed
 */

int print_R(char *format, va_list valist)
{
	char *str;
	unsigned int i = 0, j = 0;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	(void)format;

	str = va_arg(valist, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				_putchar(out[j]);
				count++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
