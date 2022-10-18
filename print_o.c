#include "main.h"

/**
 * print_o - print an unsigned int in octal form
 * @o: unsigned int
 * Return: number of digits printed
 */

int print_o(va_list o)
{
	unsigned int a[11];
	unsigned int s = 1, e = 1073741824, m, sum = 0;
	int count;

	m = va_arg(o, unsigned int);
	a[0] = m / e;
	for (; s < 11; s++)
	{
		e /= 8;
		a[s] = (m / e) % 8;
	}

	for (s = 0; s < 11; s++)
	{
		sum += a[s];
		if (sum || s == 10)
		{
			_putchar('0' + a[s]);
			count++;
		}
	}
	return (count);
}
