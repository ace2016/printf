#include "main.h"

/**
 * printadr - prints an address
 * @format: format
 * @valist: address to print
 * Return: number of characters printed
 */

int printadr(char *format, va_list valist)
{
	int count = 0;
	unsigned int a[16], i = 0, sum = 0;
	unsigned long m, e = 1152921504606846976;
	char *str = "(nil)";

	(void)format;

	m = va_arg(valist, unsigned long);
	if (m == 0)
	{
		for (; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}
		return (count);
	}
	_putchar('0');
	_putchar('x');
	count = 2;

	a[0] = m / e;
	for (i = 1; i < 16; i++)
	{
		e /= 16;
		a[i] = (m / e) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i]  < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			count++;
		}
	}
	return (count);
}
