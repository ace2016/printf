#include "main.h"

/**
 * prpercnt - prints %
 * @format: format
 * @valist: valist
 * Return: number of characters printed
 */

int prpercnt(char *format, va_list valist)
{
	(void)format;
	(void)valist;
	_putchar('%');
	return (1);
}
