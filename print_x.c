#include "main.h"
#include <stdlib.h>

/**
 * print_x - Prints ascii char value in lowercase hexadecimal
 * @x: char to print
 * Return: number of printed characters
 */

int print_x(va_list x)
{
	unsigned int a[8];
	unsigned int s = 1, e = 268435456, m, sum = 0;
	char diff;
	int count = 0;

	m = va_arg(x, unsigned int);
	diff = 'a' - ':';
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
