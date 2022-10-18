#include "main.h"
#include <stdlib.h>

/**
 * print_i - prints base 10 integer
 * @i: integer
 * Return: number of digits printed
 */

int print_i(va_list i)
{
	int a[10];
	int s, e = 1000000000, m, sum = 0, count = 0;

	m = va_arg(i, int);
	if (m < 0)
	{
		m *= -1;
		_putchar('-');
		count++;
	}
	a[0] = m / e;

	for (s = 1; s < 10; s++)
	{
		e /= 10;
		a[s] = (m / e) % 10;
	}

	for (s = 0; s < 10; s++)
	{
		sum += a[s];
		if (sum != 0 || s == 9)
		{
			_putchar('0' + a[s]);
			count++;
		}
	}
	return (count);
}
