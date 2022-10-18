#include "main.h"
#include <stdlib.h>

/**
 * print_r - prints a string in reverse
 * @r: string
 * Return: number of characters printed
 */

int print_r(va_list r)
{
	char *str;
	int i = 0, count = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	while (str[i])
		i++;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
