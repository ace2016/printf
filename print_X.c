#include "main.h"
#include <stdlib.h>

/**
 * print_X - prints an ascii char value in uppercase hexadecimal
 * @X: char
 * Return: number of digit printed
 */

int print_X(va_list X)
{
	unsigned int a[8];
	unsigned int s = 1, e = 268435456, m, sum = 0;
	char diff;
	int count;

	m = va_arg(X, unsigned int);
	diff = 'A' - ':';
	a[0] = m / e;
	for (; s < 8; s++)
	{
		e /= 16;
		a[s] = (m / e) % 16;
	}
	for (s = 0; s < 8; s++)
	{
		sum += a[s];
		if (sum || s == 7)
		{
			if (a[s] < 10)
				_putchar('0' + a[s]);
			else
				_putchar('0' + diff + a[s]);
			count++;
		}
	}
	return (count);
}
