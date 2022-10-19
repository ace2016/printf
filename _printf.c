#include "main.h"

/**
 * _printf - prints data
 * @format: formatted string to be print
 * Return: number of characters
 */

int _printf(char *format, ...)
{
	int count = 0, (*printtype)(char *, va_list);
	char t[3];
	va_list valist;

	if (format == NULL)
		return (-1);
	t[2] = '\0';
	va_start(valist, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			printtype = specifier(format);
			if (printtype)
			{
				t[0] = '%';
				t[1] = format[1];
				count += printtype(t, valist);
			}
			else if (format[1] != '\0')
			{
				count += _putchar('%');
				count += _putchar(format[1]);
			}
			else
			{
				count += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			count += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (count);
}
