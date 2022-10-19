#include "main.h"

/**
 * print_u - prints an unsigned integer
 * @u: unsigned int
 * Return: number of digits printed
 */

int print_u(char *format, va_list valist)
{
	unsigned int a[10];
	unsigned int s = 1, e = 1000000000, m, sum = 0;
	int count = 0;
	(void)format;

	m = va_arg(valist, unsigned int);
	a[0] = m / e;
	for (; s < 10; s++)
	{
		e /= 10;
		a[s] = (m / e) % 10;
	}

	for (s = 0; s < 10; s++)
	{
		sum += a[s];
		if (sum || s == 9)
		{
			_putchar('0' + a[s]);
			count++;
		}
	}
	return (count);
}
