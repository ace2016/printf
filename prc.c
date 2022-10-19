#include "main.h"

/**
 * prc - prints a char
 * @valist: format of char
 * @format: format
 * Return: number of character
 */

int prc(char *format, va_list valist)
{
	(void)format;

	_putchar(va_arg(valist, int));
	return (1);
}
