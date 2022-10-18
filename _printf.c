#include "main.h"
#include <stdarg.h>

/**
 * check_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 * Return: pointer to valid function or NULL
 */

int (*check_specifiers(const char *format))(va_list)
{
	int i = 0;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(valist, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i += 2;
				continue;
			}
			else
			{
				f = check_specifiers(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				count += f(valist);
				continue;
			}
		}
		i++;
	}
	va_end(valist);
	return (count);
}
