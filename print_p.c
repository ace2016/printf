#include "main.h"
#include <stdlib.h>

/**
 * print_p - prints an address
 * @p: address to print
 * Return: number of characters printed
 */

int print_p(va_list p)
{
	int count = 0;
	unsigned int a[16];
	unsigned int i = 0, sum = 0;
	unsigned long m, e = 1152921504606846976;
	char *str = "(nil)";

	m = va_arg(p, unsigned long);
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
