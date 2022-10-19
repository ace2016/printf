#include "main.h"

/**
 * print_S - prints a string and nonprintable char ascii values
 * @S: string
 * Return: number of characters printed
 */

int print_S(char *format, va_list valist)
{
	unsigned int i = 0;
	int count = 0;
	char *str = va_arg(valist, char *);

	if (str == NULL)
		str = "(null)";
	for (; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += prhex(valist);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}